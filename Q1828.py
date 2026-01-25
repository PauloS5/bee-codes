n = int(input())
casos = [tuple(input().split()) for _ in range(n)]

i = 1
for c in casos:
    print(f"Caso #{i}: ", end="")
    i += 1

    if c[0] == c[1]:
        print("De novo!")    
        continue

    if any([
        c[0]=='pedra'   and c[1] in ('lagarto', 'tesoura'),
        c[0]=='papel'   and c[1] in ('pedra',   'Spock'),
        c[0]=='tesoura' and c[1] in ('papel',   'lagarto'),
        c[0]=='lagarto' and c[1] in ('papel',   'Spock'),
        c[0]=='Spock'   and c[1] in ('pedra',   'tesoura')
    ]):
        print("Bazinga!")
        continue

    print("Raj trapaceou!")