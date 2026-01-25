valores = []
while True:
    resp = int(input())
    if resp == 0:
        break
    valores.append(resp)

for v in valores:
    print(" ".join(list(map(str, range(1, v+1)))))