n = int(input())

R = []
for _ in range(n):
    caso = input().split()
    R.append("".join([c[0] for c in caso]))

for r in R:
    print(r)