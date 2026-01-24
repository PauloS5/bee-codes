R = ""
while True:
    try:
        n = int(input())
        expressoes = [tuple(map(int, input().replace("=", " ").split())) for _ in range(n)]
        palpites = [tuple(input().split()) for _ in range(n)]

        erraram = []
        for p in palpites:
            i_ex = int(p[1])-1

            if p[2] == "I":
                if  expressoes[i_ex][0] + expressoes[i_ex][1] == expressoes[i_ex][2] \
                or expressoes[i_ex][0] - expressoes[i_ex][1] == expressoes[i_ex][2] \
                or expressoes[i_ex][0] * expressoes[i_ex][1] == expressoes[i_ex][2]:
                    erraram.append(p[0])
            else:
                if (p[2] == "+" and expressoes[i_ex][0] + expressoes[i_ex][1] != expressoes[i_ex][2]) \
                or (p[2] == "-" and expressoes[i_ex][0] - expressoes[i_ex][1] != expressoes[i_ex][2]) \
                or (p[2] == "*" and expressoes[i_ex][0] * expressoes[i_ex][1] != expressoes[i_ex][2]):
                    erraram.append(p[0])
            
        if len(erraram) == 0:
            R += "You Shall All Pass!\n"
        elif len(erraram) == n:
            R += "None Shall Pass!\n"
        else:
            R += " ".join(sorted(erraram)) + "\n"
    except EOFError:
        break   

print(end=R)