ttl, n = map(int, input().split())

for _ in range(n):
    if input() == "fechou":
        ttl += 1
    else:
        ttl -= 1
        
print(ttl)