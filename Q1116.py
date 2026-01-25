N = int(input())

respostas = []
for _ in range(N):
    a, b = map(int, input().split())
    
    if b == 0:
        respostas.append("divisao impossivel")
    else:
        respostas.append(f"{(a/b):.1f}")
        
for r in respostas:
    print(r)