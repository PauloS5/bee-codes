quant = 0
while True:
    senha = input()
    if senha == '2002':
        break
    quant += 1

for _ in range(quant):
    print("Senha Invalida")    
print("Acesso Permitido")