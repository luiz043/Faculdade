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

class Empregado(Pessoa):
    def __init__(self, nome, endereco,salarioBase,mesesTrabalhados):
        super().__init__(nome, endereco)
        self.mesesTrabalhados = mesesTrabalhados
        self.salarioBase = salarioBase

    def get_salarioBase(self):
        return self.salarioBase
    def set_salarioBase(self,salarioBase):
        self.salarioBase = salarioBase

    def get_mesesTrabalhados(self):
        return self.mesesTrabalhados
    
    def set_mesesTrabalhados(self,mesesTrabalhados):
        self.mesesTrabalhados = mesesTrabalhados

    def calcularSalario (self):
        return self.salarioBase * self.mesesTrabalhados
    
class Operario(Empregado):
    def __init__(self, nome, endereco, salarioBase, mesesTrabalhados,comissao):
        super().__init__(nome, endereco, salarioBase, mesesTrabalhados)
        self.comissao = comissao
    def calcularSalario(self):
        return super().calcularSalario() + self.comissao
operario1 = Operario('oi','rua oi',100,5,200)
print(operario1.calcularSalario())
    