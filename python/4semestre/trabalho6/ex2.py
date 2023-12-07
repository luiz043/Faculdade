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

class Fornecedor(Pessoa):
    def __init__(self, nome, endereco, credimaximo, valorEmDivida):
        super().__init__(nome, endereco)
        self.credimaximo = credimaximo
        self.valorEmDivida = valorEmDivida

    def get_ValoremDivida(self):    
        return self.valorEmDivida
    
    def set_ValoremDivida(self,ValoremDivida):
        self.valorEmDivida = ValoremDivida

    def get_credimaximo(self):
        return self.credimaximo
    def set_credimaximo(self,credimaximo):
        self.credimaximo = credimaximo

fornecedor1 = Fornecedor('fornecedor a ','rua bima',6000.0,500.0)
print(fornecedor1.get_credimaximo())
fornecedor1.set_credimaximo(1000)
print(fornecedor1.get_credimaximo())