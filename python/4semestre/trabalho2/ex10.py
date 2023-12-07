class Livro:
    def __init__(self, titulo, autor, editora, ano_publicacao, numero_paginas):
        self.titulo = titulo
        self.autor = autor
        self.editora = editora
        self.ano_publicacao = ano_publicacao
        self.numero_paginas = numero_paginas

    def __str__(self):
        return f"{self.titulo} por {self.autor}, publicado por {self.editora} em {self.ano_publicacao}. {self.numero_paginas} páginas."
