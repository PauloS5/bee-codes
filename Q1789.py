casos = []
while True:
    try:
        n = input()
        casos.append(list(map(int, input().split())))
    except EOFError:
        break

for c in casos:
    maior = max(c)

    if maior < 10:
        print(1)
    elif maior < 20:
        print(2)
    else:
        print(3)