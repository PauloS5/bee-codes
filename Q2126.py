subs = []
seqs = []
ttl = 0
while True:
    try:
        subs.append(input())
        seqs.append(input())
        ttl += 1
    except EOFError:
        break

for i in range(ttl):
    print(f"Caso #{i+1}:")

    qtde = seqs[i].count(subs[i])
    if qtde == 0:
        print("Nao existe subsequencia", end="\n\n")
        continue
    print(f"Qtd.Subsequencias: {qtde}")
    
    pos = len(seqs[i]) - (seqs[i][::-1].find(subs[i][::-1])) - len(subs[i]) + 1
    print(f"Pos: {pos}", end="\n\n")