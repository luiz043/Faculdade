class Lampada:
    def __init__(self):
        self.estado = None
    def estadoLampada(self,entrada):
        self.estado = entrada     
    
lampada = Lampada()
lampada.estadoLampada(input('escreva estado '))
print(lampada.estado)