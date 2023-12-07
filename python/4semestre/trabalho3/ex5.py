class Carro:
    def __init__(self):
        self.combustivel_maximo = 50
        self.combustivel_atual = 0
        self.consumo = 15  # km por litro
        self.distancia_percorrida = 0
    
    def abastecer(self, quantidade):
        if quantidade > 0:
            self.combustivel_atual = min(self.combustivel_maximo, self.combustivel_atual + quantidade)
    
    def mover(self, distancia):
        combustivel_necessario = distancia / self.consumo
        if combustivel_necessario <= self.combustivel_atual:
            self.distancia_percorrida += distancia
            self.combustivel_atual -= combustivel_necessario
    
    def consultar_combustivel(self):
        return self.combustivel_atual
    
    def consultar_distancia(self):
        return self.distancia_percorrida

# Programa principal
if __name__ == "__main__":
    carro1 = Carro()
    carro2 = Carro()
    
    carro1.abastecer(20)
    carro2.abastecer(30)
    
    carro1.mover(200)
    carro2.mover(400)
    
    print("Carro 1:")
    print("Distância percorrida:", carro1.consultar_distancia(), "km")
    print("Combustível restante:", carro1.consultar_combustivel(), "litros")
    
    print("\nCarro 2:")
    print("Distância percorrida:", carro2.consultar_distancia(), "km")
    print("Combustível restante:", carro2.consultar_combustivel(), "litros")
