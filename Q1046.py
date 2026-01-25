inicio, fim = map(int, input().split())

ttl = (24 - inicio) + fim

if ttl > 24:
    ttl -= 24
print(f"O JOGO DUROU {ttl} HORA(S)")
