n = int(input())

R = []
for _ in range(n):
    nome = input()
    grau = float(input())
    notas = list(map(float, input().split()))

    notas.pop(notas.index(max(notas)))
    notas.pop(notas.index(min(notas)))

    R.append(f"{nome} {sum(notas)*grau:.2f}")

for r in R:
    print(r)def mofiz_sum(x, y):
    str_bin_x = bin(x)[2::]
    str_bin_y = bin(y)[2::]

    bits_x = [b == '1' for b in str_bin_x]
    bits_y = [b == '1' for b in str_bin_y]

    while len(bits_y) > len(bits_x):
        bits_x.insert(0, False)
    while len(bits_x) > len(bits_y):
        bits_y.insert(0, False)

    bits_r = [False] * len(bits_x)
    for i in range(len(bits_x)):
        bits_r[i] = bits_x[i] ^ bits_y[i]

    return int("".join([str(int(b)) for b in bits_r]), 2)

casos = []
while True:
    try:
        casos.append(list(map(int, input().split())))
    except EOFError:
        break

for c in casos:
    print(mofiz_sum(c[0], c[1]))