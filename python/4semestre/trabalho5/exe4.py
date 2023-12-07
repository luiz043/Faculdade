class Pneu:
    def __init__(self, marca, tamanho):
        self.marca = marca
        self.tamanho = tamanho

    def __str__(self):
        return f"Pneu: {self.marca}, Tamanho: {self.tamanho} polegadas"


class Motor:
    def __init__(self, tipo, potencia):
        self.tipo = tipo
        self.potencia = potencia

    def __str__(self):
        return f"Motor: {self.tipo}, Potência: {self.potencia} cavalos"


class Carro:
    def __init__(self, marca, modelo, ano, pneus, motor):
        self.marca = marca
        self.modelo = modelo
        self.ano = ano
        self.pneus = pneus
        self.motor = motor

    def __str__(self):
        return f"Carro: {self.marca} {self.modelo} ({self.ano})\n{self.motor}"


# Exemplo de uso
if __name__ == "__main__":
    # Criando objetos Pneu e Motor
    pneu1 = Pneu("Michelin", 18)
    pneu2 = Pneu("Goodyear", 18)
    motor = Motor("V8", 400)

    # Criando um carro com os pneus e motor
    carro = Carro("Ford", "Mustang", 2022, [pneu1, pneu2], motor)

    # Exibindo informações do carro
    print(carro)
    print("\nPneus:")
    for pneu in carro.pneus:
        print(pneu)
