x = int(input())
y = int(input())

menor = min(x, y)
maior = max(x, y)

menor += 1
if (menor % 2 == 0):
    menor += 1

print(sum(list(range(menor, maior, 2))))