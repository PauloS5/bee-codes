R = ""
for _ in range(int(input())):
    lixo = input()
    V = sorted(filter(lambda v: v % 2 == 1, list(map(int, input().split()))))
    
    r = []
    while len(V):
        maior = max(V, default=None)
        if maior != None:
            r.append(str(maior))
            V.remove(maior)

        menor = min(V, default=None)
        if menor != None:
            r.append(str(menor))
            V.remove(menor)
    R += " ".join(r) + "\n"

print(R.strip())