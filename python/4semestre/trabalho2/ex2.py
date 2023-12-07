class LampadaTresEstados:
    def __init__(self, acesa, apagada, meialuz):
        self.acesa = acesa
        self.apagada = apagada
        self.meialuz = meialuz

acesa = True
apagada = False
meialuz = True

estados = LampadaTresEstados(acesa, apagada, meialuz)
print(estados.acesa)
