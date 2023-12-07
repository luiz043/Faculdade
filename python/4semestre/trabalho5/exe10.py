class ContaCorrente:
    def __init__(self, saldo_inicial, cheque_especial):
        self.saldo = saldo_inicial
        self.cheque_especial = cheque_especial

    def depositar(self, valor):
        self.saldo += valor

    def sacar(self, valor):
        if self.saldo + self.cheque_especial >= valor:
            self.saldo -= valor
        else:
            print("Saldo insuficiente.")

    def consultar_saldo(self):
        return self.saldo

    def __str__(self):
        return f"Conta Corrente - Saldo: R${self.saldo:.2f}, Cheque Especial: R${self.cheque_especial:.2f}"


class Poupanca:
    def __init__(self, saldo_inicial):
        self.saldo = saldo_inicial

    def depositar(self, valor):
        self.saldo += valor

    def sacar(self, valor):
        if self.saldo >= valor:
            self.saldo -= valor
        else:
            print("Saldo insuficiente.")

    def consultar_saldo(self):
        return self.saldo

    def __str__(self):
        return f"Poupança - Saldo: R${self.saldo:.2f}"


class Banco:
    def __init__(self):
        self.conta = None
        self.poupanca = None

    def inicia_banco(
        self, saldo_inicial_conta_corrente, cheque_especial, saldo_inicial_poupanca
    ):
        self.conta = ContaCorrente(saldo_inicial_conta_corrente, cheque_especial)
        self.poupanca = Poupanca(saldo_inicial_poupanca)

    def abre_conta(
        self, saldo_inicial_conta_corrente, cheque_especial, saldo_inicial_poupanca
    ):
        if self.conta is None:
            self.inicia_banco(
                saldo_inicial_conta_corrente, cheque_especial, saldo_inicial_poupanca
            )
            print("Conta Corrente e Poupança abertas com sucesso.")
        else:
            print("A conta já está aberta.")

    def fecha_conta(self):
        self.conta = None
        self.poupanca = None
        print("Conta Corrente e Poupança fechadas com sucesso.")

    def __str__(self):
        return f"Banco\n{self.conta}\n{self.poupanca}"


# Exemplo de uso
if __name__ == "__main__":
    banco = Banco()

    # Abrir uma conta
    banco.abre_conta(1000.0, 500.0, 500.0)

    # Exibir informações do banco
    print(banco)

    # Realizar operações na conta corrente
    banco.conta.depositar(200.0)
    banco.conta.sacar(150.0)

    # Realizar operações na poupança
    banco.poupanca.depositar(300.0)
    banco.poupanca.sacar(50.0)

    # Exibir informações atualizadas
    print("\nInformações após as operações:")
    print(banco)

    # Fechar a conta
    banco.fecha_conta()
