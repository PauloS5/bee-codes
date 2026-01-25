n = int(input())

casos = [int(input()) for _ in range(n)]

fib = [0, 1]
for i in range(2, max(casos)+1):
    fib.append(fib[i-1] + fib[i-2])

for c in casos:
    print(f"Fib({c}) = {fib[c]}")