valor =  int(input())

for n in [x for x in range(1, 10000) if x % valor == 2]:
    print(n)