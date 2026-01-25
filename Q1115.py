respostas = []

while True:
    x, y = map(int, input().split())
    
    if x == 0 or y == 0:
        break
    
    if x > 0 and y > 0:
        respostas.append("primeiro")
        continue
    elif x < 0 and y < 0:
        respostas.append("terceiro")
        continue
    elif x > 0 and y < 0:
        respostas.append("quarto")
        continue
    elif x < 0 and y > 0:
        respostas.append("segundo")

for r in respostas:
    print(r)