class Glicemia:
    def __init__(self, valor, data, hora):
        self.valor = int(valor) # convertendo para int para facilitar cálculos
        self.data = data
        self.hora = hora.strip() 

    def definir_turno(self):
        # extrai apenas a hora (ex: "12:30" vira 12)
        hora_int = int(self.hora.split(':')[0])
        
        if 5 <= hora_int < 12:
            return "Manhã"
        elif 12 <= hora_int < 18:
            return "Tarde"
        else: # das 18h às 4:59h
            return "Noite"

    def __eq__(self, outro):
        if not isinstance(outro, Glicemia):
            return False
        return self.data == outro.data and self.hora == outro.hora
    
    def __str__(self):
        return f'Valor: {self.valor} | Data: {self.data} | Hora: {self.hora} | Turno: {self.definir_turno()}'

    @staticmethod
    def calcular_media(lista):
        if not lista: return 0
        soma = sum(item.valor for item in lista)
        return int(soma / len(lista))

    @staticmethod
    def calcular_mediana(lista):
        if not lista: return 0 # evita divisão por zero
        valores = sorted([int(item.valor) for item in lista])
        tamanho = len(valores)
        meio = tamanho // 2
        
        if tamanho % 2 != 0: # se for ímpar, retorna o valor do meio
            return valores[meio]
        else:
            return int((valores[meio] + valores[meio-1]) / 2) # se for par, retorna a média dos dois valores centrais