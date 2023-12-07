class Pedido:
    def __init__(self):
        self.valor_total = 0.0
        self.itens_pedidos = []

    def adicionar_item(self, item_pedido):
        self.itens_pedidos.append(item_pedido)
        self.valor_total += item_pedido.produto.valor * item_pedido.quantidade

    def obter_valor_total(self):
        return self.valor_total


class ItemPedido:
    def __init__(self, produto, quantidade):
        self.produto = produto
        self.quantidade = quantidade


class Produto:
    def __init__(self, codigo, valor, descricao):
        self.codigo = codigo
        self.valor = valor
        self.descricao = descricao
