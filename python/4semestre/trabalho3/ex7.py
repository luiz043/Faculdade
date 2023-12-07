class Relogio:
    def __init__(self, hora, minuto, segundo):
        self.hora = hora
        self.minuto = minuto
        self.segundo = segundo
    
    def setHora(self, hora, minuto, segundo):
        self.hora = hora
        self.minuto = minuto
        self.segundo = segundo
    
    def getHora(self):
        return self.hora, self.minuto, self.segundo
    
    def avancarSegundo(self):
        self.segundo += 1
        if self.segundo >= 60:
            self.segundo = 0
            self.minuto += 1
            if self.minuto >= 60:
                self.minuto = 0
                self.hora += 1
                if self.hora >= 24:
                    self.hora = 0

# Programa principal
if __name__ == "__main__":
    relogio = Relogio(10, 30, 45)
    
    print("Horário atual:", relogio.getHora())
    
    relogio.avancarSegundo()
    
    print("Horário após avançar 1 segundo:", relogio.getHora())
    
    relogio.setHora(23, 59, 59)
    relogio.avancarSegundo()
    
    print("Horário após avançar 1 segundo no último minuto do dia:", relogio.getHora())
