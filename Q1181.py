linha = int(input())
operacao = input()
ttl = 0.0

for c in range(144):
    i = int(c / 12)

    n = float(input())

    if i == linha:
        ttl += n
    
if operacao == 'M':
    ttl /= 12

print(f"{ttl:.1f}")