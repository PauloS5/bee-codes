n = int(input())

casos = []
valores = []
for _ in range(n):
    casos.append(input().split())
    valores.append(list(map(int, input().split()))) 

for i in range(n):
    ttl = valores[i][0] + valores[i][1]
    if ttl % 2 == 0: resp = 'PAR'
    else: resp = 'IMPAR'

    if resp == casos[i][1]: print(casos[i][0])
    else: print(casos[i][2])