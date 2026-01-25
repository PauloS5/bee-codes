O = input()

resultado = 0

for c in range(144):
    coluna = c % 12
    linha = int(c / 12)

    n = float(input())

    if coluna > linha:
        resultado += n
    
if  O == 'M':
    resultado /= 66.0

print(f"{resultado:.1f}")