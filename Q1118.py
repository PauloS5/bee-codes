X = 1
notas = []
respostas = []
while X != 2:
    nota = float(input())

    if nota >= 0 and nota <= 10:
        notas.append(nota)
    else:
        respostas.append("nota invalida")
        continue

    if len(notas) == 2:
        respostas.append(f"media = {(sum(notas)/2):.2f}")
        notas = []

        respostas.append("novo calculo (1-sim 2-nao)")
        X = int(input())

        while not(X == 1 or X == 2):
            respostas.append("novo calculo (1-sim 2-nao)")
            X = int(input())

for r in respostas:
    print(r)