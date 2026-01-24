def fracoes_continuas(conjunto: list[int]) -> float:
    ttl = conjunto[len(conjunto)-1]
    for i in range(len(conjunto)-2, -1, -1):
        ttl = conjunto[i] + (1/ttl)
    return ttl

n = int(input())
conjunto = [3] + [6]*n

print(f"{fracoes_continuas(conjunto):.10f}")