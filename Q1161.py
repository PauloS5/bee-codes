from math import factorial

casos = []

while True:
    try:
        casos.append(tuple(map(int, input().split())))
    except EOFError:
        break

for c in casos:
    print(factorial(c[0]) + factorial(c[1]))