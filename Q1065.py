nums = list(map(int, [input() for _ in range(5)]))

pares = list(filter(lambda x: x % 2 == 0, nums))

print(f"{len(pares)} valores pares")