def gerarDiamante(n: int) -> str:
    letras = [chr(65+i) for i in range(n)]
    
    diamante = ""
    i = n-1
    for l in letras:
        for _ in range(i): diamante += " "

        if l != letras[0]:
            diamante += l
            
        for _ in range(n-(i+1)): diamante += " "
        for _ in range(n-i-2): diamante += " "
        i -= 1

        diamante += l + "\n"

    i = 1
    for l in letras[n-2::-1]:
        for _ in range(i): diamante += " "

        if l != letras[0]:
            diamante += l
            
        for _ in range(n-(i+1)): diamante += " "
        for _ in range(n-i-2): diamante += " "
        i += 1

        diamante += l + "\n"
    return diamante[0:len(diamante)-1]

for l in gerarDiamante(5).splitlines():
    print(f"   {l}")