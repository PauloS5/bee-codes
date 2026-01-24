renas = ["Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"]

soma = sum(list(map(int, input().split())))

print(renas[(soma-1) % 9])