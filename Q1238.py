n = int(input())
casos = []
for _ in range(n):
    casos.append(input().split())
for c in casos:
    c1, c2 = c
    for i in range(max(len(c1), len(c2))):
        if i < len(c1):
            print(c1[i], end="")
        if i < len(c2):
            print(c2[i], end="")
    print()