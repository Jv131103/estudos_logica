def verificar_hipotenusa(n):
    """Essa versão baseia no opróprio limite sendo a hipotenusa"""
    cateto_oposto = 1

    while cateto_oposto <= n:
        cateto_adjascente = cateto_oposto

        while cateto_adjascente <= n:
            hipotenusa = cateto_oposto**2 + cateto_adjascente**2
            if hipotenusa == n**2:
                print(
                    f"{n} é hipotenusa de",
                    f"({cateto_oposto}, {cateto_adjascente})"
                )
            cateto_adjascente += 1

        cateto_oposto += 1


def verificar_hipotenusas(n):
    """Essa versão supõe que precisamos encontrar no laço a hipotenusa"""
    for h in range(1, n + 1):  # h é a hipotenusa que estamos testando
        encontrou = False
        for a in range(1, h):
            for b in range(a, h):  # evita repetição espelhada
                if a**2 + b**2 == h**2:
                    print(f"{h} é hipotenusa de ({a}, {b})")
                    encontrou = True
                    break  # achou pelo menos um par, pode parar
            if encontrou:
                break


verificar_hipotenusa(20)
verificar_hipotenusas(20)
