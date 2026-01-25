n = int(input())

valores = []
for _ in range(n):
     valores.append(tuple(map(float, input().split())))

for v in valores:
    media = ((v[0] * 2) + (v[1] * 3) + (v[2] * 5)) / (2+3+5)
    print(f"{media:.1f}")