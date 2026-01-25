def main():
    notas = input().split()
    
    n1, n2, n3, n4 = map(float, notas)
    media = ((n1*2.0) + (n2*3.0) + (n3*4.0) + (n4*1.0))/(2.0 + 3.0 + 4.0 + 1.0)

    if media >= 7.0:
        print(f"Media: {media:.1f}")
        print("Aluno aprovado.")
        return
    if media < 5.0:
        print(f"Media: {media:.1f}")
        print("Aluno reprovado.")
        return
    
    notaExame = float(input())
    print(f"Media: {media:.1f}")
    print("Aluno em exame.")
    print(f"Nota do exame: {notaExame:.1f}")
    
    mediaFinal = (media + notaExame)/2.0

    if mediaFinal >= 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")

    print(f"Media final: {mediaFinal:.1f}")
    
main()
