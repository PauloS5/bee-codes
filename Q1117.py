notas = []
erros = 0
while True:
    if len(notas) == 2:
        break

    nota = float(input())
    
    if nota >= 0 and nota <= 10:
        notas.append(nota)
    else:
        erros += 1

for _ in range(erros):
    print("nota invalida")
print(f"media = {(sum(notas)/2):.2f}")