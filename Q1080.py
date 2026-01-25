maior = -1;
pos = -1
for i in range(100):
    v = int(input())
    if max(maior, v) != maior:
        maior = v
        pos = i+1
        
print(maior)
print(pos)