n = int(input())

casos = []

for _ in range(n):
    casos.append(tuple(map(int, input().split())))

for c in casos:
    X = c[0]
    Y = c[1]

    if X % 2 == 0:
        X += 1
    
    soma = 0
    for i in range(0, Y):
        soma += X + (2*i)
    print(soma)