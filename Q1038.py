itens = [4.0, 4.5, 5.0, 2.0, 1.5]

codigo, quantidade = input().split()
codigo, quantidade = int(codigo), int(quantidade)

total = itens[codigo-1] * quantidade

print(f"Total: R$ {total:.2f}")