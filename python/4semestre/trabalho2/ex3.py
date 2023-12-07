class LampadaTresEstados:
    def __init__(self, estado_inicial="apagada"):
        estados_possiveis = ["apagada", "acesa", "meia-luz"]
        self.estado = estado_inicial

    def ligar(self):
        self.estado = "acesa"

    def desligar(self):
        self.estado = "apagada"

    def definir_meia_luz(self):
        self.estado = "meia-luz"

    def __str__(self):
        return f"Lâmpada no estado {self.estado}"


class LampadaAjustavel:
    def __init__(self, luminosidade_inicial=0):
        self.luminosidade = luminosidade_inicial

    def ajustar_luminosidade(self, valor):
        if 0 <= valor <= 100:
            self.luminosidade = valor
        else:
            raise ValueError("Luminosidade fora do intervalo válido")

    def __str__(self):
        return f"Lâmpada com luminosidade {self.luminosidade}%"


# Exemplo de uso para a LampadaTresEstados
lampada_fixa = LampadaTresEstados()
print(lampada_fixa)
lampada_fixa.ligar()
print(lampada_fixa)
lampada_fixa.definir_meia_luz()
print(lampada_fixa)
lampada_fixa.desligar()
print(lampada_fixa)

# Exemplo de uso para a LampadaAjustavel
lampada_ajustavel = LampadaAjustavel()
print(lampada_ajustavel)
lampada_ajustavel.ajustar_luminosidade(50)
print(lampada_ajustavel)
lampada_ajustavel.ajustar_luminosidade(75)
print(lampada_ajustavel)


