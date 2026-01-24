valores = []
while True:
    valor = int(input())

    if valor < 0:
        print(f"{sum(valores)/len(valores):.2f}")
        break

    valores.append(valor)