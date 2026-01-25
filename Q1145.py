quebra, fim = map(int, input().split())

fim += 1

for v in range(1, fim):
    print(v, end="")
    if v % quebra == 0 and v < fim:
        print()
    else:
        print(end=" ")