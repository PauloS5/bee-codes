c = 0
ttl_inter = 0
ttl_gremio = 0
ttl_empate = 0
op = 1
while op == 1:
    c += 1

    p_inter, p_gremio = map(int, input().split())

    if p_inter == p_gremio:
        ttl_empate +=1
    elif p_inter > p_gremio:
        ttl_inter += 1
    elif p_gremio > p_inter:
        ttl_gremio += 1

    op = int(input())
    

for _ in range(c):
    print("Novo grenal (1-sim 2-nao)")
print(f"{c} grenais")
print(f"Inter:{ttl_inter}")
print(f"Gremio:{ttl_gremio}")
print(f"Empates:{ttl_empate}")
if ttl_inter > ttl_gremio:
    print("Inter venceu mais")
else:
    print("Gremio venceu mais")