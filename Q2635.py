R = ""
while True:
    try:
        n = int(input())
        salvas = [input() for _ in range(n)]

        n = int(input())
        for _ in range(n):
            busca = input()

            maior = 0
            ttl = 0
            for s in salvas:
                if s.startswith(busca):
                    ttl += 1
                    maior = max(maior, len(s))

            if not ttl: R += "-1\n"
            else: R += f"{ttl} {maior}\n"
    except EOFError:
        break

print(end=R)