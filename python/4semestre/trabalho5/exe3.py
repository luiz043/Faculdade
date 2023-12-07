class Contato:
    def __init__(self, nome, telefone):
        self.nome = nome
        self.telefone = telefone

    def __str__(self):
        return f"Nome: {self.nome}, Telefone: {self.telefone}"


class Agenda:
    def __init__(self):
        self.contatos = []

    def adicionar_contato(self, contato):
        self.contatos.append(contato)

    def remover_contato(self, nome):
        for contato in self.contatos:
            if contato.nome == nome:
                self.contatos.remove(contato)
                print(f"Contato '{nome}' removido.")
                return
        print(f"Contato '{nome}' não encontrado na agenda.")

    def buscar_contato(self, nome):
        for contato in self.contatos:
            if contato.nome == nome:
                return contato
        return None

    def listar_contatos(self):
        if not self.contatos:
            print("A agenda está vazia.")
        else:
            print("Contatos na agenda:")
            for contato in self.contatos:
                print(contato)


# Função para exibir o menu da agenda
def exibir_menu():
    print("\nMenu da Agenda Telefônica")
    print("1. Adicionar Contato")
    print("2. Remover Contato")
    print("3. Buscar Contato")
    print("4. Listar Contatos")
    print("5. Sair")


if __name__ == "__main__":
    agenda = Agenda()

    while True:
        exibir_menu()
        opcao = input("Escolha uma opção (1/2/3/4/5): ")

        if opcao == "1":
            nome = input("Digite o nome do contato: ")
            telefone = input("Digite o telefone do contato: ")
            contato = Contato(nome, telefone)
            agenda.adicionar_contato(contato)
        elif opcao == "2":
            nome = input("Digite o nome do contato a ser removido: ")
            agenda.remover_contato(nome)
        elif opcao == "3":
            nome = input("Digite o nome do contato a ser buscado: ")
            contato = agenda.buscar_contato(nome)
            if contato:
                print(f"Contato encontrado: {contato}")
            else:
                print("Contato não encontrado.")
        elif opcao == "4":
            agenda.listar_contatos()
        elif opcao == "5":
            print("Saindo da agenda.")
            break
        else:
            print("Opção inválida. Por favor, escolha uma opção válida (1/2/3/4/5).")
