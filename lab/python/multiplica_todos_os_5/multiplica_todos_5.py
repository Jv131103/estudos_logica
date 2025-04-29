def multiplica_ate_5():
    # Forma Linear
    multiplica = 5
    for x in range(1, 6):
        multiplica *= x

    return multiplica


if __name__ == "__main__":
    multiplicar = multiplica_ate_5()
    print(multiplicar)
