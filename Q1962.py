n = int(input())

casos = []
for _ in range(n):
    casos.append(int(input()))

for c in casos:
    T = 2015 - c

    if T <= 0: print(f"{abs(T)+1} A.C.")
    else: print(f"{T} D.C.")