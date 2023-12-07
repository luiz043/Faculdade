import pyxel
import enum

class GameState(enum.Enum):
    RUNNING = 0
    GAME_OVER = 1


class Direction(enum.Enum):
    RIGHT = 0
    DOWN = 1
    LEFT = 2
    UP = 3

class GameState(enum.Enum):
    RUNNING = 0
    GAME_OVER = 1



class GameObject:
    def __init__(self, x, y, w, h):
        self.x = x
        self.y = y
        self.w = w
        self.h = h

    def draw(self):
        pyxel.bltm(0, 0, self.tm, self.u, self.v, self.w, self.h)

class SnakeSection(GameObject):
    def __init__(self, x, y, is_head=False):
        super().__init__(x, y, 8, 8)
        self.is_head = is_head

    def draw(self, direction):
        width = self.w
        height = self.h
        sprite_x = 0
        sprite_y = 0
        
        if self.is_head:
            if direction == Direction.RIGHT:
                sprite_x = 8
                sprite_y = 0
            if direction == Direction.LEFT:
                sprite_x = 8
                sprite_y = 0
                width = width * -1
            if direction == Direction.DOWN:
                sprite_x = 0
                sprite_y = 8
            if direction == Direction.UP:
                sprite_x = 0
                sprite_y = 8
                height = height * -1
        pyxel.blt(self.x, self.y, 0, sprite_x, sprite_y, width, height)

    def intersects(self, u, v, w, h):
        is_intersected = False
        if (
            u + w > self.x
            and self.x + self.w > u
            and v + h > self.y
            and self.y + self.h > v
        ):
            is_intersected = True
        return is_intersected
