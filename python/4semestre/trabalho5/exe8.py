class Pneu:
    def __init__(self, marca, tamanho):
        self.marca = marca
        self.tamanho = tamanho

    def __str__(self):
        return f"Pneu {self.marca}, Tamanho {self.tamanho}"


class Motor:
    def __init__(self, marca, potencia):
        self.marca = marca
        self.potencia = potencia

    def __str__(self):
        return f"Motor {self.marca}, Potência {self.potencia} CV"


class Carro:
    def __init__(self, marca, modelo, ano, pneus, motor):
        self.marca = marca
        self.modelo = modelo
        self.ano = ano
        self.pneus = pneus
        self.motor = motor

    def __str__(self):
        return f"Carro: {self.marca} {self.modelo} ({self.ano})\n{self.motor}\nPneus: {', '.join(map(str, self.pneus))}"


# Exemplo de uso
if __name__ == "__main__":
    # Criando objetos Pneu e Motor
    pneu1 = Pneu("Michelin", "205/55R16")
    pneu2 = Pneu("Michelin", "205/55R16")
    pneu3 = Pneu("Michelin", "205/55R16")
    pneu4 = Pneu("Michelin", "205/55R16")

    motor = Motor("V6", 300)

    # Criando um objeto Carro com os objetos Pneu e Motor
    carro = Carro("Toyota", "Camry", 2023, [pneu1, pneu2, pneu3, pneu4], motor)

    # Exibindo informações do carro
    print(carro)
