def getDivs(valor: int) -> list:
    divs = []
    for i in range(1, valor):
        if valor % i == 0:
            divs.append(i)
    return divs

casosc = int(input())

casos = [int(input()) for _ in range(casosc)]

for c in casos:
    if c == sum(getDivs(c)):
        print(f"{c} eh perfeito")
    else:
        print(f"{c} nao eh perfeito")