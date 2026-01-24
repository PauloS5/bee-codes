def main():
    p, j1, j2, r, a = map(int, input().split())
    ehPar = int((j1 + j2) % 2 == 0)

    if r and a: return 2
    elif not(r) and a: return 1
    elif r and not(a): return 1
    else: return int(ehPar != p)+1

print(f"Jogador {main()} ganha!")