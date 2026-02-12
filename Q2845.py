import math

lixo = input()

valores = list(map(int, input().split()))

n = max(valores)+1
while math.gcd(n, *valores) != 1:
    n += 1

print(n)