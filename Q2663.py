n = int(input())
k = int(input())

valores = [int(input()) for _ in range(n)]

valores.sort(reverse=True)
passaram = valores[0:k]
ttl = len(passaram) + valores.count(passaram[k-1]) - passaram.count(passaram[k-1])
print(ttl)