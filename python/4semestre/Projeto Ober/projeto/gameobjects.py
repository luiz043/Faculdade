import pyxel

class GameObject:
    def __init__(self, x, y, w, h):
        self.x = x
        self.y = y
        self.w = w
        self.h = h

    def draw(self):
        pyxel.bltm(0, 0, self.tm, self.u, self.v, self.w, self.h)