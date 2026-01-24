tabela = {
    "suco de laranja": 120,
    "morango fresco": 85,
    "mamao": 85,
    "goiaba vermelha": 70,
    "manga": 56,
    "laranja": 50,
    "brocolis": 34
}

C = []
i = 0
while True:
    n = int(input())
    if n == 0:
        break    
    C.append(0)
    for _ in range(n):
        q, f = input().split(" ", 1)
        C[i] += int(q) * tabela[f.strip()]
    i += 1

for c in C:
    if c <= 110:
        print(f"Mais {110-c} mg")
    elif c >= 130:
        print(f"Menos {c-130} mg")
    else:
        print(f"{c} mg")