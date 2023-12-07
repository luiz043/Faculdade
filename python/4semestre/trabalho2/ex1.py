
class Lampada:
    def __init__(self, tamanho, preco):
        self.tamanho = tamanho
        self.preco = preco

tamanho = input('qual o tamanho ') 
preco = 100  

lampada = Lampada(tamanho, preco)
print(lampada.tamanho)
