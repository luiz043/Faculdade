class Televisao:
    def __init__(self):
        self.volume = 10
        self.canal = 1
    
    def aumentar_volume(self):
        if self.volume < 100:
            self.volume += 1
    
    def diminuir_volume(self):
        if self.volume > 0:
            self.volume -= 1
    
    def aumentar_canal(self):
        self.canal += 1
    
    def diminuir_canal(self):
        if self.canal > 1:
            self.canal -= 1
    
    def trocar_canal(self, novo_canal):
        if 1 <= novo_canal <= 100:
            self.canal = novo_canal
    
    def consultar_volume(self):
        return self.volume
    
    def consultar_canal(self):
        return self.canal

# Programa principal
if __name__ == "__main__":
    televisao = Televisao()
    
    televisao.trocar_canal(5)
    televisao.aumentar_volume()
    televisao.aumentar_volume()
    
    print("Canal:", televisao.consultar_canal())
    print("Volume:", televisao.consultar_volume())
    
    televisao.diminuir_canal()
    televisao.diminuir_volume()
    
    print("Canal:", televisao.consultar_canal())
    print("Volume:", televisao.consultar_volume())
