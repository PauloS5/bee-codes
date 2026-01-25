respostas = []

while True:
    x, y = map(int, input().split())
    if x == y:
        break
    if x < y:
        respostas.append("Crescente")
    else:
        respostas.append("Decrescente")

for r in respostas:
    print(r)