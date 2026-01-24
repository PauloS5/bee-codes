respostas = ["Os atributos dos monstros vao ser inteligencia, sabedoria...", "Iron Maiden's gonna get you, no matter how far!", "Urano perdeu algo muito precioso..."]

R = ""
while True:
    try:
        jogadas = input().split()

        if (
            (jogadas[0] == jogadas[1] == jogadas[2])
            or (jogadas[0] != jogadas[1] != jogadas[2] != jogadas[0])
        ):
            R += "Putz vei, o Leo ta demorando muito pra jogar...\n"
        elif (
            (jogadas.count("pedra") == 2 and jogadas.count("tesoura") == 1)
            or (jogadas.count("papel") == 2 and jogadas.count("pedra") == 1)
            or (jogadas.count("tesoura") == 2 and jogadas.count("papel") == 1)
        ):
            R += "Putz vei, o Leo ta demorando muito pra jogar...\n"

        elif jogadas.count("pedra") == 1 and jogadas.count("tesoura") == 2:
            R += respostas[jogadas.index("pedra")] + "\n"
        elif jogadas.count("papel") == 1 and jogadas.count("pedra") == 2:
            R += respostas[jogadas.index("papel")] + "\n"
        elif jogadas.count("tesoura") == 1 and jogadas.count("papel") == 2:
            R += respostas[jogadas.index("tesoura")] + "\n"
    except EOFError:
        break

print(end=R)