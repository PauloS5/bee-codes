ttl = int(input())
n = int(input())

figuras = set()
for _ in range(n):
    figuras.add(input())
print(ttl - len(figuras))