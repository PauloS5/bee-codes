casos = []
while True:
    n = int(input())
    if n == 0:
        break
    casos.append(n)

for c in casos:
    if c % 2 != 0:
       c += 1

    soma = c
    soma += c + 2
    soma += c + 4
    soma += c + 6
    soma += c + 8

    print(soma)