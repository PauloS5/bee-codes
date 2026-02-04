idades = list(map(int, input().split()))
indexes = list(range(3))

indexes.remove(idades.index(max(idades)))
indexes.remove(idades.index(min(idades)))

print(['Huguinho', 'Zezinho', 'Luisinho'][indexes[0]].lower())