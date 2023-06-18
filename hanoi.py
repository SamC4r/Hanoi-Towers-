
cont = 0
n = 3

def hanoi(n,inicial,objetivo,aux):
    global cont
    if n == 0:  return

    hanoi(n - 1, inicial,aux,objetivo)
    cont = cont + 1
    print("Disco {} movido desde {} hasta {} ".format(n,inicial,objetivo))
    hanoi(n - 1, aux,objetivo,inicial)


if __name__ == '__main__':
    hanoi(n,"inicial","objetivo","aux")
    print("Movimientos",cont)