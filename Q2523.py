R = ""
while True:
    try:
        alfabeto = list(input())
        n  = input()
        valores = list(map(int, input().split()))

        for v in valores:
            R += alfabeto[v-1]
        R += "\n"

    except EOFError:
        break

print(end=R)