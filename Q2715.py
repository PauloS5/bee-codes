R = ""
while True:
    try:
        n = int(input())
        valores = list(map(int, input().split()))

        difR = 0
        difG = sum(valores)
        for i in range(0, n):
            difR += valores[i]
            difG -= valores[i]
            diferenca = difG - difR
            if diferenca <= 0: 
                R += str(min(abs(diferenca), abs((difG+valores[i]) - (difR-valores[i])))) + "\n"
                break
    except EOFError:
        break

print(end=R)