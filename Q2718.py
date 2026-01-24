R = ""
n = int(input())
for _ in range(n):
    binario = bin(int(input()))[2:]
    maior = 0
    ttl = 0
    for b in binario:
        if b == "1":
            ttl += 1
            maior = max(maior, ttl)
        if b == "0":
            ttl = 0
    R += str(maior) + "\n"
print(end=R)