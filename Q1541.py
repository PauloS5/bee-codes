from math import sqrt

casos = []
while True:
    valores = list(map(int, input().split()))
    if valores[0] == 0:
        break
    casos.append(valores)

for c in casos:
    area_casa = c[0] * c[1]
    area_terreno = area_casa * (100/c[2])
    lado = int(sqrt(area_terreno))
    print(lado)