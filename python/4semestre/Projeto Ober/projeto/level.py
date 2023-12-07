import pyxel

class Level:
    def __init__(self):
        self.tm = 0
        self.u = 0
        self.v = 0
        self.w = 24
        self.h = 16

    def draw(self):
        pyxel.bltm(0, 0, self.tm, self.u, self.v, self.w, self.h)    