class CadastroEmpregado:
    def __init__(
        self, nome, idade, funcao, data_nascimento, telefone, peso, altura, salario
    ):
        self.nome = nome
        self.idade = idade
        self.funcao = funcao
        self.data_nascimento = data_nascimento
        self.telefone = telefone
        self.peso = peso
        self.altura = altura
        self.salario = salario

    def mostrar_informacoes(self):
        print(f"Nome: {self.nome}")
        print(f"Idade: {self.idade} anos")
        print(f"Função na empresa: {self.funcao}")
        print(f"Data de Nascimento: {self.data_nascimento}")
        print(f"Telefone: {self.telefone}")
        print(f"Peso: {self.peso} kg")
        print(f"Altura: {self.altura} metros")
        print(f"Salário: R${self.salario:.2f}")


# Programa de teste
if __name__ == "__main__":
    # Criando um objeto CadastroEmpregado
    empregado1 = CadastroEmpregado(
        nome="João da Silva",
        idade=30,
        funcao="Gerente de Vendas",
        data_nascimento="1993-05-15",
        telefone="(11) 1234-5678",
        peso=70.5,
        altura=1.75,
        salario=5000.00,
    )

    # Exibindo informações do empregado
    print("Informações do Empregado:")
    empregado1.mostrar_informacoes()
