class CarrodeCorrida:
    def __init__(self,numeroCarro,piloto,equipe,velMax,velAtual,ligado):
        self.numeroCarro = numeroCarro
        self.piloto= piloto
        self.equipe = equipe
        self.velMax = velMax
        self.velAtual = velAtual
        self.ligado = ligado



    def setNumeroCarro(self, numeroCarro):
        self.numeroCarro = numeroCarro

    def setPiloto(self, piloto):
        self.piloto = piloto

    def setEquipe(self, equipe):
        self.equipe = equipe

    def setVelocidadeMaxima(self, velMax):
        self.velMax = velMax

    def getNumeroCarro(self):
        return self.numeroCarro

    def getPiloto(self):
        return self.piloto

    def getEquipe(self):
        return self.equipe

    def getVelMax(self):
        return self.velMax

    def getVelAtual(self):
        return self.velAtual
    
    
    def acelerar(self,ligado,velAtual,velMax):
        if self.ligado:
            self.velAtual += velAtual
        if self.velAtual > velMax:
            self.velAtual = velMax
    
    def frear(self,velAtual):
        if self.ligado:
            velAtual -= velAtual
        if self.velAtual < 0:
            velAtual = 0

    def parar(self):
        if self.ligado:
            self.velAtual = 0.0

    def ligar(self):
        self.ligado = True
    def desligar(self):
        if self.velAtual == 0.0:
            self.ligado = False  

carrodecorrida = CarrodeCorrida(0,'joao','amsterdan',350,0.0,'desligado')
nome_piloto = carrodecorrida.getPiloto()
nome_equipe = carrodecorrida.getEquipe()
print (nome_piloto)
print ( nome_equipe )
carrodecorrida.setVelocidadeMaxima(120)
VelocidadeMaxima = carrodecorrida.getVelMax()
print(VelocidadeMaxima)