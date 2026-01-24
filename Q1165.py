def getDivs(valor: int) -> list:
    divs = []
    for i in range(1, valor+1):
        if valor % i == 0:
            divs.append(i)
    return divs

casosc = int(input())

casos = [int(input()) for _ in range(casosc)]

for c in casos:
    if 2 == len(getDivs(c)):
        print(f"{c} eh primo")
    else:
        print(f"{c} nao eh primo")