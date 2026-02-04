n = int(input())

ttl = n

ttl_linhas = int((n * (n-3)) / 2)
ttl_pontos = int((n * (n-1) * (n-2) * (n-3)) / 24)

# Explicação em https://www.youtube.com/watch?v=_gMRRS1wbj4
ttl += 1 + ttl_pontos + ttl_linhas

print(ttl)