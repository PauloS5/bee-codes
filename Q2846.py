def isFib(num: int) -> bool:
    if num == 1:
        return True
    
    ant1, ant2 = 1, 1
    atual = ant1 + ant2
    while atual <= num:
        if num == atual:
            return True
        ant2 = ant1
        ant1 = atual
        atual = ant1 + ant2

    return False

n = int(input())
i = 3
c = 0
while True:
    i += 1
    if isFib(i):
        continue
    c += 1
    if n == c:
        print(i)
        break