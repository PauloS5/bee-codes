R = ""
while True:
    try:
        n, q = map(int, input().split())

        notas = []
        for _ in range(n):
            notas.append(int(input()))

        pos = []
        for _ in range(q):
            pos.append(int(input()))

        notas.sort(reverse=True)

        for p in pos:
            R += str(notas[p-1]) + "\n"  
    except EOFError:
        break

print(end=R)