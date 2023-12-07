class Pessoa:
    def __init__(self, nome, idade, altura):
        self.nome = nome
        self.idade = idade
        self.altura = altura

class Agenda:
    def __init__(self):
        self.pessoas = [None] * 10
    
    def armazenaPessoa(self, nome, idade, altura):
        nova_pessoa = Pessoa(nome, idade, altura)
        for i in range(len(self.pessoas)):
            if self.pessoas[i] is None:
                self.pessoas[i] = nova_pessoa
                return True
        return False
    
    def buscaPessoa(self, nome):
        for i, pessoa in enumerate(self.pessoas):
            if pessoa and pessoa.nome == nome:
                return i
        return -1
    
    def imprimeAgenda(self):
        for i, pessoa in enumerate(self.pessoas):
            if pessoa:
                print(f"Posição {i} - Nome: {pessoa.nome}, Idade: {pessoa.idade}, Altura: {pessoa.altura}")
    
    def imprimePessoa(self, i):
        pessoa = self.pessoas[i]
        if pessoa:
            print(f"Posição {i} - Nome: {pessoa.nome}, Idade: {pessoa.idade}, Altura: {pessoa.altura}")
        else:
            print(f"Posição {i} está vazia.")

if __name__ == "__main__":
    agenda = Agenda()
    
    agenda.armazenaPessoa("João", 30, 1.75)
    agenda.armazenaPessoa("Maria", 25, 1.65)
    
    posicao_joao = agenda.buscaPessoa("João")
    posicao_maria = agenda.buscaPessoa("Maria")
    
    print("Posição de João na agenda:", posicao_joao)
    print("Posição de Maria na agenda:", posicao_maria)
    
    agenda.imprimeAgenda()
    
    agenda.imprimePessoa(posicao_joao)
    agenda.imprimePessoa(posicao_maria)
