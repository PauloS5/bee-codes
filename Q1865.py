n = int(input())

casos = [(input().split())[0] for _ in range(n)]

for c in casos:
    if c == 'Thor': print("Y")
    else: print("N")