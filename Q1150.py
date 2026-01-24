X = int(input())

while True:
    Z = int(input())

    if Z > X:
        break

soma = 0
contador = 0
for i in range(X, Z):
    soma += i
    contador += 1
    if soma > Z:
        break
print(contador)