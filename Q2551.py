R = ""
while True:
    try:
        n = int(input())

        t, d = map(int, input().split())
        record = d/t

        R += "1\n"
        contador = 1
        for _ in range(n-1):
            contador += 1

            t, d = map(int, input().split())

            if (d/t > record):
                R += str(contador) + "\n"
                record = d/t

    except EOFError:
        break

print(end=R)