def nzp(x):
    if x > 0: return 1
    elif x == 0: return 0
    return -1

def main():
    n = int(input())
    casos = list(map(int, input().split()))

    classificacao = nzp(casos[0]-casos[1])

    if classificacao == 0:
        print(0)
        return
    
    for i in range(1, n-1):
        if classificacao == nzp(casos[i]-casos[i+1]):
            print(0)
            return
        if 0 == nzp(casos[i]-casos[i+1]):
            print(0)
            return
        classificacao = nzp(casos[i]-casos[i+1])

    print(1)

main()