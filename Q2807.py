def iccanobif(n: int) -> list:
    if n == 1:
        return [1]
    
    valores = [1, 1]
    for i in range(2, n):
        valores.append(valores[i-1]+valores[i-2])
    return reversed(valores)

print(" ".join(map(str, iccanobif(int(input())))))