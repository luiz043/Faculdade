
import pyxel
class GameObject:
    def __init__(self, x, y, w, h):
        self.x = x
        self.y = y
        self.w = w
        self.h = h

    def draw(self):
        pyxel.bltm(0, 0, self.tm, self.u, self.v, self.w, self.h)




class Apple(GameObject):
    def __init__(self, x, y):
        super().__init__(x, y, 8, 8)

    def draw(self):
        pyxel.blt(self.x, self.y, 0, 16, 0, self.w, self.h)

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

    def move(self, new_x, new_y):
        self.x = new_x
        self.y = new_y