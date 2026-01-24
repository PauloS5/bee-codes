R = ""
while True:
    try:
        n = int(input())
        votos = input()

        favor = votos.count("1")

        if favor >= ((n*2)/3):
            R += "impeachment"
        else:
            R += "acusacao arquivada"

        R += "\n"
    except EOFError:
        break

print(end=R)