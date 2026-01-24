n_casos = int(input())

casos = []
for _ in range(n_casos):
    casos.append(list(input().split()))

    casos[len(casos)-1][0] = int(casos[len(casos)-1][0])
    casos[len(casos)-1][1] = int(casos[len(casos)-1][1])
    casos[len(casos)-1][2] = float(casos[len(casos)-1][2])
    casos[len(casos)-1][3] = float(casos[len(casos)-1][3])

for c in casos:
    anos = 0
    for _ in range(1, 102):
        anos += 1
        c[0] += int(c[0] * (c[2])/100)
        c[1] += int(c[1] * (c[3])/100)
        if c[0] > c[1]:
            break
    if anos == 101:
        print("Mais de 1 seculo.")
    else:
        print(f"{anos} anos.")