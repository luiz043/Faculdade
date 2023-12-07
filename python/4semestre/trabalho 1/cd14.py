
class Lampada:
    def __init__(self, tamanho, preco):
        self.tamanho = tamanho
        self.preco = preco

tamanho = input('qual o tamanho ') 
preco = 100  

lampada = Lampada(tamanho, preco)
print(lampada.tamanho)





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

