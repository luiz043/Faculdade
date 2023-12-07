class Contato:
    def __init__(self, nome, telefone):
        self.nome = nome
        self.telefone = telefone

    def __str__(self):
        return f"{self.nome}: {self.telefone}"


class Agenda:
    def __init__(self):
        self.contatos = []

    def adicionar_contato(self, contato):
        self.contatos.append(contato)

    def listar_contatos(self):
        for contato in self.contatos:
            print(contato)

    def buscar_contato(self, nome):
        for contato in self.contatos:
            if contato.nome == nome:
                return contato
        return None

    def remover_contato(self, nome):
        for contato in self.contatos:
            if contato.nome == nome:
                self.contatos.remove(contato)
                print(f"Contato {contato.nome} removido.")


# Exemplo de uso
if __name__ == "__main__":
    agenda = Agenda()

    # Adicionar contatos
    contato1 = Contato("João", "123-456-7890")
    contato2 = Contato("Maria", "987-654-3210")

    agenda.adicionar_contato(contato1)
    agenda.adicionar_contato(contato2)

    # Listar contatos
    print("Lista de Contatos:")
    agenda.listar_contatos()

    # Buscar contato
    nome_busca = "João"
    contato_encontrado = agenda.buscar_contato(nome_busca)
    if contato_encontrado:
        print(f"Contato encontrado: {contato_encontrado}")
    else:
        print(f"Contato {nome_busca} não encontrado.")

    # Remover contato
    nome_remover = "Maria"
    agenda.remover_contato(nome_remover)
    print("Lista de Contatos após a remoção:")
    agenda.listar_contatos()
