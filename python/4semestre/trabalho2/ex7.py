class Empregado:
    def __init__(self, nome, departamento, horas_trabalhadas_no_mes, salario_por_hora):
        self.nome = nome
        self.departamento = departamento
        self.horas_trabalhadas_no_mes = horas_trabalhadas_no_mes
        self.salario_por_hora = salario_por_hora

    def mostraDados (self):
        print (f'nome: {self.nome}')
        print (f'departamento: {self.departamento}')
        print (f'horas_trabalhadas_no_mes:{self.horas_trabalhadas_no_mes}')


    def calculaSalarioMensal(self):
        salario_mensal = self.horas_trabalhadas_no_mes * self.salario_por_hora
        return salario_mensal