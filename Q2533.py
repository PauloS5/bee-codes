R = ""
while True:
    try:
        n = int(input())
        num, den = 0, 0
        for _ in range(n):
            n, c = map(int, input().split())
            num += n*c
            den += c
        R += f"{num/(den*100):.4f}\n"
    except EOFError:
        break

print(end=R)