from abc import ABC,abstractmethod
class Conta(ABC):
        @abstractmethod
        def __init__(self, numero, titular, saldo=0, limite=1000.0):
                self._numero = numero
                self._titular = titular
                self._saldo = saldo
                self._limite = limite
        @abstractmethod
        def atualizar(self):
                pass
class ContaPoupanca(Conta):
        @abstractmethod
        def __init__(self, numero, titular, saldo=0, limite=1000.0):
                super().__init__(numero, titular, saldo, limite)
               
