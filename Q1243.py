resps = []
ps = []
while True:
    try:
        frase = input()
        palavras = frase.split()

        c = 0
        tams = 0
        for p in palavras:
            if p[len(p)-1] == ".":
                p = p[::-1].replace(".", "", 1)[::-1]

            if p.isalpha():
                # ps.append(p)
                tams += len(p)
                c += 1
        if c == 0: c = 1
        resps.append(int(tams/c))
    except EOFError:
        break

for r in resps:
    if r <= 3:
        print(250)
    elif r <= 5:
        print(500)
    else:
        print(1000)