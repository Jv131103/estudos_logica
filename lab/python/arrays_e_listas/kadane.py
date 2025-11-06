def maior(val1, val2):
    if val1 > val2:
        return val1
    return val2


def kadane(arr):
    soma_atual = arr[0]
    soma_max = arr[0]

    for i in range(len(arr)):
        soma_atual = maior(arr[i], soma_atual + arr[i])
        soma_max = maior(soma_max, soma_atual)

    return soma_max


def kadane2(arr):
    soma_atual = soma_max = arr[0]
    for x in arr[1:]:
        soma_atual = max(x, soma_atual + x)
        soma_max = max(soma_max, soma_atual)
    return soma_max


arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
print(kadane(arr))
print(kadane2(arr))
