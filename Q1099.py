n = int(input())

valores = []
for _ in range(n):
    valores.append(tuple(map(int, input().split())))

for dupla in valores:
    ttl = 0
    for num in range(min(dupla)+1, max(dupla)):
        if (num % 2 == 1):
            ttl += num
    print(ttl)