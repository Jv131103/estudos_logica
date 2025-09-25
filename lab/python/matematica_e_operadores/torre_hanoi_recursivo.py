def torre_hanoi(n, origem, destino, auxiliar):
    if n == 1:
        print(f"Mova disco de {origem} para {destino}")
    else:
        torre_hanoi(n - 1, origem, auxiliar, destino)
        print(f"Mova disco de {origem} para {destino}")
        torre_hanoi(n - 1, auxiliar, destino, origem)


# Exemplo: 3 discos da torre A para C, usando B como auxiliar
torre_hanoi(3, "A", "C", "B")
