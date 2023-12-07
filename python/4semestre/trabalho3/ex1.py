import math

class Circulo:
    def __init__(self, raio, centro_x=0, centro_y=0):
        self.raio = raio
        self.centro_x = centro_x
        self.centro_y = centro_y
    
    def _calcular_area(self):
        return math.pi * self.raio ** 2
    
    def _calcular_circunferencia(self):
        return 2 * math.pi * self.raio
    
    def definir_raio(self, novo_raio):
        self.raio = novo_raio
    
    def aumentar_raio(self, percentual_aumento):
        self.raio *= 1 + percentual_aumento / 100
    
    def definir_centro(self, centro_x, centro_y):
        self.centro_x = centro_x
        self.centro_y = centro_y
    
    def imprimir_raio(self):
        print("Raio:", self.raio)
    
    def imprimir_centro(self):
        print("Centro:", self.centro_x, ",", self.centro_y)
    
    def imprimir_area(self):
        print("Área:", self._calcular_area())
    
    def imprimir_circunferencia(self):
        print("Circunferência:", self._calcular_circunferencia())

# Programa principal
if __name__ == "__main__":
    circulo = Circulo(5)
    
    circulo.imprimir_raio()
    circulo.imprimir_centro()
    circulo.imprimir_area()
    circulo.imprimir_circunferencia()
    
    circulo.definir_raio(8)
    circulo.aumentar_raio(20)
    circulo.definir_centro(2, 3)
    
    circulo.imprimir_raio()
    circulo.imprimir_centro()
    circulo.imprimir_area()
    circulo.imprimir_circunferencia()
