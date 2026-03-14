from glicemia import Glicemia

lista_glicemia =[]

nome_arquivo = './glicemia.txt'

try:
    with open(nome_arquivo, 'r', encoding ='utf8') as leitor:
        for linha in leitor:
            partes == linha.strip

