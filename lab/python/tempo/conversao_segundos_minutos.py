def converter_segundos_em_minutos(segundos):
    return segundos // 60


def converter_segundos(segundos):
    minutos = segundos // 60
    resto = segundos % 60
    return minutos, resto


entrada = int(input())
minutos, resto = converter_segundos(entrada)
print(f"{minutos} minuto(s) e {resto} segundo(s)")

entrada = int(input())
saida = converter_segundos_em_minutos(entrada)
print(saida)
