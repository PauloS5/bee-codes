pares = []
impares = []
saida = []
for _ in range(15):
    caso = int(input())

    if caso % 2 == 0:
        pares.append(caso)
    else:
        impares.append(caso)
    
    if len(impares) == 5:
        saida += impares
        impares = []
    if len(pares) == 5:
        saida += pares
        pares = []
saida += impares
saida += pares

c_pares = 0
c_impares = 0
for valor in saida:
    if valor % 2 == 0:
        print(f"par[{c_pares}] = {valor}")
        c_pares += 1
        c_impares = 0
    else:
        print(f"impar[{c_impares}] = {valor}")
        c_impares += 1
        c_pares = 0