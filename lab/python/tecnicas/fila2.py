FILA = []


def is_empty():
    return len(FILA) == 0


def enqueue(valor):
    FILA.append(valor)


def dequeue():
    if is_empty():
        return None
    return FILA.pop(0)


def view():
    print(FILA)


if __name__ == "__main__":
    enqueue(10)
    enqueue(20)
    view()
    removido = dequeue()
    print("Removido -", removido)
    view()
