class Pessoa:
    def __init__(self, nome, idade, altura):
        self.__nome = nome
        self.__idade = idade
        self.__altura = altura
        
    def get_nome(self):
        return self.__nome
    
    def set_nome(self, novo_nome):
        self.__nome = novo_nome
    
    def get_idade(self):
        return self.__idade
    
    def set_idade(self, nova_idade):
        self.__idade = nova_idade
    
    def get_altura(self):
        return self.__altura
    
    def set_altura(self, nova_altura):
        self.__altura = nova_altura
    
    def imprimir_dados(self):
        print("Nome:", self.__nome)
        print("Idade:", self.__idade)
        print("Altura:", self.__altura)

# Programa principal
if __name__ == "__main__":
    pessoa = Pessoa("João", 30, 1.75)
    pessoa.imprimir_dados()
    
    pessoa.set_nome("Maria")
    pessoa.set_idade(25)
    pessoa.set_altura(1.65)
    pessoa.imprimir_dados()
