class Produto:
    def __init__(self, nome, preco, quantidade_em_estoque):
        self.nome = nome
        self.preco = preco
        self.quantidade_em_estoque = quantidade_em_estoque

    def __str__(self):
        return f"{self.nome} - R${self.preco:.2f}"


class ItemPedido:
    def __init__(self, produto, quantidade):
        self.produto = produto
        self.quantidade = quantidade

    def calcular_subtotal(self):
        return self.produto.preco * self.quantidade

    def __str__(self):
        return f"{self.quantidade}x {self.produto} = R${self.calcular_subtotal():.2f}"


class Pedido:
    def __init__(self):
        self.itens = []

    def adicionar_item(self, item):
        self.itens.append(item)

    def calcular_total(self):
        total = sum(item.calcular_subtotal() for item in self.itens)
        return total

    def __str__(self):
        return (
            "\n".join(str(item) for item in self.itens)
            + f"\nTotal do Pedido: R${self.calcular_total():.2f}"
        )


class Pagamento:
    def __init__(self, metodo, valor):
        self.metodo = metodo
        self.valor = valor

    def __str__(self):
        return f"Pagamento {self.metodo}: R${self.valor:.2f}"


# Programa de teste
if __name__ == "__main__":
    # Criando produtos
    produto1 = Produto("Arroz", 5.99, 100)
    produto2 = Produto("Feijão", 3.49, 50)
    produto3 = Produto("Leite", 2.29, 80)

    # Criando itens de pedido
    item1 = ItemPedido(produto1, 3)
    item2 = ItemPedido(produto2, 2)
    item3 = ItemPedido(produto3, 5)

    # Criando um pedido
    pedido = Pedido()
    pedido.adicionar_item(item1)
    pedido.adicionar_item(item2)
    pedido.adicionar_item(item3)

    # Exibindo o pedido
    print("Pedido do Cliente:")
    print(pedido)

    # Efetuando pagamento
    pagamento = Pagamento("cartão", pedido.calcular_total())
    print("\nEfetuando Pagamento:")
    print(pagamento)
