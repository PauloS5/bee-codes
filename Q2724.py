R = ""
for _ in range(int(input())):
    perigosos = []
    for _ in range(int(input())):
        perigosos.append(input())

    for _ in range(int(input())):
        experiencia = input()

        r = "Prossiga"
        for p in perigosos:
            if experiencia == p or experiencia.endswith(p):
                r = "Abortar"
                break

            i = experiencia.find(p)
            if i != -1:
                ch = experiencia[i+len(p)]
                if not(ch.isnumeric() or (ch.isalpha() and ch.islower())):
                    r = "Abortar"
                    break
        R += r + "\n"
    R += "\n"

print(R.strip())