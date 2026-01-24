n = int(input())
R = []

for _ in range(n):
    a, b =input().split()

    if a.endswith(b):
        R.append("encaixa")
    else:
        R.append("nao encaixa")

for r in R:
    print(r)
    