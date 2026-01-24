R = ""
while True:
    try:
        x_base, y_base, n = map(int, input().split())
        for _ in range(n):
            x, y = map(int, input().split())
            if (x <= x_base and y <= y_base) or (x <= y_base and y <= x_base):
                R += "Sim\n"
            else:
                R += "Nao\n"
    except EOFError:
        break
print(end=R)