n = int(input())

casos = [int(input()) for _ in range(n)]

for ttl_casas in casos:
    ttl_graos = 2 ** ttl_casas
    ttl_kg = int(ttl_graos/12/1000)
    print(ttl_kg, "kg")