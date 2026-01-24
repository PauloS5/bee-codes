def ehPrimo(x):
    if x < 2:
        return False
    if x == 2:
        return True
    if x % 2 == 0:
        return False
    for i in range(3, x, 2):
        if x % i == 0:
            return False
    return True

R = ""
while True:
    try:
        n = int(input())
        moedas = [int(input()) for _ in range(n)]
        s = int(input())

        moedas.reverse()
        soma = sum([moedas[i] for i in range(0, n, s)])

        if ehPrimo(soma):
            R += "You’re a coastal aircraft, Robbie, a large silver aircraft.\n"
        else:
            R += "Bad boy! I’ll hit you.\n"
    except EOFError:
        break
        
print(end=R)