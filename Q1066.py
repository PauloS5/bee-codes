valores = [int(input()) for _ in range(5)]

pares = list(filter(lambda x: x%2 == 0, valores))
inpares = list(filter(lambda x: x%2 == 1, valores))
positivos = list(filter(lambda x: x > 0, valores))
negativos = list(filter(lambda x: x < 0, valores))

print(f"{len(pares)} valor(es) par(es)")
print(f"{len(inpares)} valor(es) impar(es)")
print(f"{len(positivos)} valor(es) positivo(s)")
print(f"{len(negativos)} valor(es) negativo(s)")