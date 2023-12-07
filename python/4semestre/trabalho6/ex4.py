class Pessoa:
    def __init__(self, nome, endereco):
        self.nome = nome
        self.endereco = endereco

    def get_nome(self):
        return self.nome

    def set_nome(self, nome):
        self.nome = nome

    def get_endereco(self):
        return self.endereco

    def set_endereco(self, endereco):
        self.endereco = endereco
    
class Cliente (Pessoa):
    def __init__(self,nome,endereco,valorEmDivida,credimaximo):
        super().__init__(nome, endereco)
        self.credimaximo = credimaximo
        self.valorEmDivida = valorEmDivida
    
    def get_credimaximo(self):
        return self.valorEmDivida
    def set_credimaximo(self,credimaximo):
        self.credimaximo = credimaximo

    def get_valorEmDivida(self):
        return self.valorEmDivida
    def set_valorEmDivida(self,valorEmDivida):
        self.valorEmDivida = valorEmDivida

    def obterSaldo(self):
        return self.credimaximo - self.valorEmDivida

cliente1 = Cliente('bom dia ','rua sesea',500,1000)
print(cliente1.obterSaldo())
cliente1.set_credimaximo(1500)
print(cliente1.obterSaldo())
    



