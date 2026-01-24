R = ""
while True:
    try:
        n_atr = int(input())
        n_cartas_m, n_cartas_l = map(int, input().split())

        cartas_m = []
        for _ in range(n_cartas_m):
            cartas_m.append(tuple(map(int, input().split())))

        cartas_l = []
        for _ in range(n_cartas_l):
            cartas_l.append(tuple(map(int, input().split())))

        carta_m, carta_l = map(int, input().split())
        atr = int(input())

        if cartas_m[carta_m-1][atr-1] > cartas_l[carta_l-1][atr-1]:
            R += "Marcos\n"
        elif cartas_m[carta_m-1][atr-1] < cartas_l[carta_l-1][atr-1]:
            R += "Leonardo\n"
        else:
            R += "Empate\n"

    except EOFError:
        break   

print(end=R)