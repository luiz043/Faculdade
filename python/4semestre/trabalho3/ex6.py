class Elevador :
    def __init__(self,andar_atual,pessoas,total_andares,capacidade):
        self.andar_atual = andar_atual
        self.pessoas = pessoas
        self.total_andares = total_andares
        self.capacidade = capacidade 


    def Entra(self,pessoas):
        if self.pessoas < self.capacidade:
            self.pessoas += pessoas
             

    def Sair(self,pessoas):
        if self.pessoas > 0:
            self.pessoas -= pessoas
    
    def Subir(self,andar_atual,total_andares):
        if andar_atual < total_andares:
            andar_atual += andar_atual
    
    def Descer(self,andar_atual):
        if andar_atual > 0:
            andar_atual -= 1
    
    def get_andar_atual(self):
        return self.andar_atual
    
    def get_pessoas(self):
        return self.pessoas
    def set_pessoas (self,pessoas):
        self.pessoas = pessoas

    def imprime(self):
        print(self.pessoas)

elevador = Elevador(0,0,10,5)
elevador.Entra(2)
elevador.imprime()
elevador.Sair(1)
elevador.imprime()


    
    
    

        
    
        