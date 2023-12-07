import pandas
tabela = pandas.read_csv(r"D:\DOWNLOADS\telecom_users.csv")
tabela = tabela.drop("Unnamed: 0",axis=1)
print(tabela)
tabela.info()
tabela["TotalGasto"] = pandas.to_numeric((tabela["TotalGasto"]),erros="coerce")
