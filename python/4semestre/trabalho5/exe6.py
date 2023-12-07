class Departamento:
    def __init__(self, nome, codigo):
        self.nome = nome
        self.codigo = codigo

    def __str__(self):
        return f"Departamento: {self.nome} (Código: {self.codigo})"


class Funcionario:
    def __init__(self, nome, salario, departamento):
        self.nome = nome
        self.salario = salario
        self.departamento = departamento

    def __str__(self):
        return f"Funcionário: {self.nome}\nSalário: R${self.salario:.2f}\n{self.departamento}"


# Exemplo de uso
if __name__ == "__main__":
    # Criando departamentos
    departamento1 = Departamento("Vendas", "VD")
    departamento2 = Departamento("TI", "TI")

    # Criando funcionários e associando a departamentos
    funcionario1 = Funcionario("João", 5000.00, departamento1)
    funcionario2 = Funcionario("Maria", 6000.00, departamento2)

    # Exibindo informações dos funcionários e departamentos
    print(funcionario1)
    print("\n")
    print(funcionario2)
