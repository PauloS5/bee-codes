qtde = int(input())

ttl_in = 0
ttl_out = 0

for _ in range(qtde):
    n = int(input())

    if n >= 10 and n <= 20:
        ttl_in += 1
    else:
        ttl_out += 1

print(f"{ttl_in} in")
print(f"{ttl_out} out")