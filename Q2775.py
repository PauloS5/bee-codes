R  = ""
while True:
    try:
        n = int(input())
        valores = list(map(int, input().split()))
        tempos  = list(map(int, input().split()))

        tempo = 0
        i = 0
        while i < n-1:
            trocou = False
            j = 0
            while j < n-i-1:
                v1, v2 = valores[j], valores[j+1]
                t1, t2 = tempos[j], tempos[j+1]
                if valores[j] > valores[j+1]:
                    tempo += t1 + t2
                    valores[j], valores[j+1] = v2, v1
                    tempos[j], tempos[j+1] = t2, t1
                    trocou = True
                j += 1
            if not trocou:
                break
            i += 1

        R += f"{tempo}\n"
    except EOFError:
        break

print(end=R)