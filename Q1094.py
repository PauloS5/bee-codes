n = int(input())

ttl_c = 0
ttl_r = 0
ttl_s = 0
for _ in range(n):
    quant, tipo = input().split()
    quant = int(quant)

    if tipo == 'C':
        ttl_c += quant
    elif tipo == 'R':
        ttl_r += quant
    else:
        ttl_s += quant

"""
ttl_geral -> 100
ttl_x -> y

y * ttl_geral = ttl_x * 100
y = (ttl_x * 100) / ttl_geral
"""

ttl_geral = ttl_c+ttl_r+ttl_s
print(f"Total: {ttl_geral} cobaias")
print(f"Total de coelhos: {ttl_c}")
print(f"Total de ratos: {ttl_r}")
print(f"Total de sapos: {ttl_s}")
print(f"Percentual de coelhos: {((ttl_c * 100) / ttl_geral):.2f} %")
print(f"Percentual de ratos: {((ttl_r * 100) / ttl_geral):.2f} %")
print(f"Percentual de sapos: {((ttl_s * 100) / ttl_geral):.2f} %")