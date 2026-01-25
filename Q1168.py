n = int(input())

relacao = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]

casos = []
for _ in range(n):
    casos.append(input())

for linha in casos:
    ttl_leds = 0
    for num in linha:
        ttl_leds += relacao[int(num)]
    print(f"{ttl_leds} leds")