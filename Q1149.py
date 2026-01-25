casos = list(map(int, input().split()))

A = max(casos)
casos.remove(A)
N = max(casos)

ttl = 0
for i in range(0, N):
    ttl += A+i

print(ttl)