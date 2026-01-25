x = int(input())
y = int(input())

soma = 0
for i in range(min(x, y), max(x, y)+1):
    if not((i % 13) == 0):
        soma += i
    
print(soma)