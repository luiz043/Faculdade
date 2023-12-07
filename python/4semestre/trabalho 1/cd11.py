# Função para converter decimal para octal
def decimal_to_octal(decimal_value):
    return oct(decimal_value).replace("0o", "")

# Solicitar ao usuário um valor decimal
decimal_input = int(input("Digite um valor decimal: "))

# Converter e imprimir o valor em octal
octal_value = decimal_to_octal(decimal_input)
print(f"O valor decimal {decimal_input} é equivalente a {octal_value} em octal.")
