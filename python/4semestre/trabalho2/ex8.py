class Livro:
    def __init__(self,nome, autor, tamanho):
        self.nome = nome 
        self.autor = autor
        self.__tamanho= tamanho
livro = Livro('livro 1','autor 1', 380)
print(livro.autor)