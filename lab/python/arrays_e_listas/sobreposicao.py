def mesclar_intervalos(intervalos):
    intervalos = sorted(intervalos)  # ordena por início
    resultado = [intervalos[0]]

    for inicio, fim in intervalos[1:]:
        ultimo_inicio, ultimo_fim = resultado[-1]
        if inicio <= ultimo_fim:  # sobrepõe → mescla
            resultado[-1][1] = max(ultimo_fim, fim)
        else:  # não sobrepõe → adiciona novo
            resultado.append([inicio, fim])

    return resultado


print(mesclar_intervalos([[1, 3], [2, 6], [8, 10], [9, 11]]))
