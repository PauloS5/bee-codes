n = int(input())
estrelas = list(map(int, input().split()))
passou = [False] * n

p = 0
ttl_passou = 0
ttl_carneiros = sum(estrelas)
while True:
    if p < 0 or p >= n:
        break

    orig = estrelas[p]

    if orig > 0:
        estrelas[p] -= 1
        ttl_carneiros -= 1

    if not passou[p]:
        passou[p] = True
        ttl_passou += 1

    if orig % 2 == 0:
        p -= 1
    else:
        p += 1

print(f"{ttl_passou} {ttl_carneiros}")