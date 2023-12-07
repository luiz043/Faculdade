def imprimir_tabela_ascii():
    print("Tabela ASCII")
    print("-------------")
    print("Letra | Código")
    print("-------------")
    
    for codigo in range(128):
        letra = chr(codigo)
        print(f"  {letra}   |   {codigo}")

imprimir_tabela_ascii()
