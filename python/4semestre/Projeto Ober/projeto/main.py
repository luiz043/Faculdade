import pyxel
import enum
import time
import random
import collections
import math
from level import Level
from gameobjects import GameObject
from meteor import Meteor
from apple import Apple
from snakesection import SnakeSection
from snakesection import Direction
from snakesection import GameState
from hud import Hud

def center_text(text, page_width, char_width=pyxel.FONT_WIDTH):
    text_width = len(text) * char_width
    return (page_width - text_width) / 2



def right_text(text, page_width, char_width=pyxel.FONT_WIDTH):
    text_width = len(text) * char_width
    return page_width - (text_width + char_width)





class App:
    def __init__(self):
        pyxel.init(192, 128, display_scale=8, capture_scale=8, title="Nibbles", fps=60)
        pyxel.load("assets/resources.pyxres")
        self.current_game_state = GameState.RUNNING
        self.level = Level()
        self.hud = Hud()
        self.apple = Apple(64, 32)
        self.snake = []  # Store the snake section
        self.snake.append(SnakeSection(32, 32, is_head=True))
        self.snake.append(SnakeSection(24, 32))
        self.snake.append(SnakeSection(16, 32))
        self.snake_direction = Direction.RIGHT
        self.sections_to_add = 0
        self.speed = 3
        self.time_last_frame = time.time()
        self.dt = 0
        self.time_since_last_move = 0
        self.score = 0
        self.apples_eaten_this_level = 0
        self.apples_eaten_total = 0
        self.current_level = 1
        self.meteors = []
        self.spawn_meteor() 
        self.input_queue = collections.deque()  
        self.play_music = True
        if self.play_music:
            pyxel.playm(0, loop=True)  # toca musica na track 0
        pyxel.run(self.update, self.draw)

    def spawn_meteor(self):
        new_x = random.randrange(8, 184, 8)
        new_y = random.randrange(8, 120, 8)
        meteor = Meteor(new_x, new_y)
        self.meteors.append(meteor)

    def move_meteors(self):
        for meteor in self.meteors:
            meteor.move()

    def check_meteor_collision(self):
        for meteor in self.meteors:
            if meteor.intersects(self.snake[0].x, self.snake[0].y, self.snake[0].w, self.snake[0].h):
                pyxel.stop()
                pyxel.play(3, 1)  # toca som da track 1 no canal 3 , som de derrota 
                self.current_game_state = GameState.GAME_OVER
        for s in self.snake:
            if s == self.snake[0]:
                continue
            for meteor in self.meteors:
                if meteor.intersects(s.x, s.y, s.w, s.h):
                    pyxel.stop()
                    pyxel.play(3, 1)  # toca som da track 1 no canal 3 , som de derrota 
                    self.current_game_state = GameState.GAME_OVER
    
    
    
    def start_new_game(self):
        self.current_game_state = GameState.RUNNING
        self.snake.clear()
        self.snake.append(SnakeSection(32, 32, is_head=True))
        self.snake.append(SnakeSection(24, 32))
        self.snake.append(SnakeSection(16, 32))
        self.snake_direction = Direction.RIGHT
        self.sections_to_add = 0
        self.speed = 2
        self.time_last_frame = time.time()
        self.dt = 0
        self.time_since_last_move = 0
        self.score = 0
        self.apples_eaten_this_level = 0
        self.apples_eaten_total = 0
        self.current_level = 1
        self.input_queue.clear()
        self.meteors.clear()  # Limpa a lista de meteoros
        self.spawn_meteor()
        if self.play_music:
            pyxel.playm(0, loop=True)  

    def draw_game_over_screen(self):
        pyxel.rect(0, 0, 192, 128, 8)  # Fundo preto
        game_over_text = "Game Over"
        game_over_text_x = center_text(game_over_text, 192)
        pyxel.text(game_over_text_x, 50, game_over_text, 7)

    def update_game_over(self):
        if pyxel.btnp(pyxel.KEY_SPACE):
            self.start_new_game()
            self.current_game_state = GameState.RUNNING  # Adiciona essa linha

    def update(self):
        time_this_frame = time.time()
        self.dt = time_this_frame - self.time_last_frame
        self.time_last_frame = time_this_frame
        self.time_since_last_move += self.dt
        self.check_input()
        if self.current_game_state == GameState.RUNNING:
            if self.time_since_last_move >= 1 / self.speed:
                self.time_since_last_move = 0
                self.move_snake()
                self.check_collisions()
                self.score += len(self.snake) * self.apples_eaten_total + 1
                self.move_meteors()
                self.check_meteor_collision()
            if random.randint(1, 100) < 2:  # Ajuste conforme necessário para controlar a frequência de geração
                self.spawn_meteor()
                
    def spawn_meteor(self):
        new_x = random.randrange(8, 184, 8)
        new_y = 0  # Começa do topo da tela
        meteor = Meteor(new_x, new_y)
        self.meteors.append(meteor)
    
    
    def toggle_music(self):
        if self.play_music:
            self.play_music = False
            pyxel.stop()  
        else:
            self.play_music = True
            pyxel.playm(0, loop=True) 
    
    def draw(self):
        pyxel.cls(0)
        self.level.draw()
        self.apple.draw()
        for s in self.snake:
            s.draw(self.snake_direction)
        self.hud.draw_title()
        self.hud.draw_score(self.score)
        self.hud.draw_level(self.current_level)
        self.hud.draw_apples(self.apples_eaten_total)
        for meteor in self.meteors:
            meteor.draw()
        if self.current_game_state == GameState.GAME_OVER:
            self.draw_game_over_screen()
       

    def check_collisions(self):
        # Apple
        if self.apple.intersects(self.snake[0].x, self.snake[0].y, self.snake[0].w, self.snake[0].h):
            pyxel.play(3, 0)  # toca som da maça ao comer 
            self.speed += (self.speed * 0.1)
            self.sections_to_add += 1
            self.move_apple()
            self.apples_eaten_total += 1
            self.apples_eaten_this_level += 1
        # seção para rabo da cobra 
        for s in self.snake:
            if s == self.snake[0]:
                continue
            if s.intersects(self.snake[0].x, self.snake[0].y, self.snake[0].w, self.snake[0].h):
                pyxel.stop()
                pyxel.play(3, 1)  # toca som da track 1 no canal 3 , som de derrota 
                self.current_game_state = GameState.GAME_OVER
        # Wall
        if pyxel.tilemap(0).pget(self.snake[0].x/8, self.snake[0].y/8)[0] == 3:
            pyxel.stop()
            pyxel.play(3, 1)  # toca som da track 1 no canal 3 , som de derrota 
            self.current_game_state = GameState.GAME_OVER

    def move_apple(self):
        # seleciona lugar novo aleatorio para a maçã 
        # e confirma se não é a cobra ou uma parede 
        try_count = 0
        max_attempts = 100
        good_position = False
        while not good_position:
            new_x = random.randrange(8, 184, 8)
            new_y = random.randrange(8, 120, 8)
            good_position = True
            # Check snake
            for s in self.snake:
                if (
                    new_x + 8 > s.x
                    and s.x + s.w > new_x
                    and new_y + 8 > s.y
                    and s.y + s.h > new_y
                ):
                    good_position = False
                    try_count += 1
                    break

            # se posição for boa então move ela 
            if good_position:
                self.apple.move(new_x, new_y)
            if try_count == max_attempts:
                print("erro ao tratar")


    def move_snake(self):
        
        if len(self.input_queue):
            self.snake_direction = self.input_queue.popleft()
        
        if self.sections_to_add > 0:
            self.snake.append(SnakeSection(self.snake[-1].x, self.snake[-1].y))
            self.sections_to_add -= 1
        
        previous_location_x = self.snake[0].x
        previous_location_y = self.snake[0].y
        if self.snake_direction == Direction.RIGHT:
            self.snake[0].x += self.snake[0].w
        if self.snake_direction == Direction.LEFT:
            self.snake[0].x -= self.snake[0].w
        if self.snake_direction == Direction.DOWN:
            self.snake[0].y += self.snake[0].w
        if self.snake_direction == Direction.UP:
            self.snake[0].y -= self.snake[0].w
        #mexe a cauda 
        for s in self.snake:
            if s == self.snake[0]:
                continue
            current_location_x = s.x
            current_location_y = s.y
            s.x = previous_location_x
            s.y = previous_location_y
            previous_location_x = current_location_x
            previous_location_y = current_location_y

    def check_input(self):
        if self.current_game_state == GameState.RUNNING:
            if pyxel.btnp(pyxel.KEY_SPACE):
                self.spawn_meteor()
        if self.current_game_state == GameState.GAME_OVER:
            if pyxel.btn(pyxel.KEY_END):
                self.start_new_game()
        if pyxel.btnp(pyxel.KEY_M):
            self.toggle_music()
        if pyxel.btn(pyxel.KEY_RIGHT):
            if len(self.input_queue) == 0:
                if self.snake_direction != Direction.LEFT and self.snake_direction != Direction.RIGHT:
                    self.input_queue.append(Direction.RIGHT)
            else:
                if self.input_queue[-1] != Direction.LEFT and self.input_queue[-1] != Direction.RIGHT:
                    self.input_queue.append(Direction.RIGHT)
        elif pyxel.btn(pyxel.KEY_LEFT):
            if len(self.input_queue) == 0:
                if self.snake_direction != Direction.RIGHT and self.snake_direction != Direction.LEFT:
                    self.input_queue.append(Direction.LEFT)
            else:
                if self.input_queue[-1] != Direction.RIGHT and self.input_queue[-1] != Direction.LEFT:
                    self.input_queue.append(Direction.LEFT)
        elif pyxel.btn(pyxel.KEY_DOWN):
            if len(self.input_queue) == 0:
                if self.snake_direction != Direction.UP and self.snake_direction != Direction.DOWN:
                    self.input_queue.append(Direction.DOWN)
            else:
                if self.input_queue[-1] != Direction.UP and self.input_queue[-1] != Direction.DOWN:
                    self.input_queue.append(Direction.DOWN)
        elif pyxel.btn(pyxel.KEY_UP):
            if len(self.input_queue) == 0:
                if self.snake_direction != Direction.DOWN and self.snake_direction != Direction.UP:
                    self.input_queue.append(Direction.UP)
            else:
                if self.input_queue[-1] != Direction.DOWN and self.input_queue[-1] != Direction.UP:
                    self.input_queue.append(Direction.UP)



App()
