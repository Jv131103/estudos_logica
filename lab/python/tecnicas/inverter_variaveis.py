def versao1():
    n1, n2 = input().split()
    n1, n2 = int(n1), int(n2)

    temp = n1
    n1 = n2
    n2 = temp

    print(n1, n2)


def versao2():
    n1, n2 = map(int, input().split())
    n1, n2 = n2, n1
    print(n1, n2)


# versao1()
versao2()
