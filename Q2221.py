n = int(input())

R = []
for _ in range(n):
    bonus = int(input())
    ataque_1, defesa_1, nivel_1 = map(int, input().split())
    ataque_2, defesa_2, nivel_2 = map(int, input().split())
    golpe_1 = (ataque_1+defesa_1)/2 + (bonus if nivel_1 % 2 == 0 else 0)
    golpe_2 = (ataque_2+defesa_2)/2 + (bonus if nivel_2 % 2 == 0 else 0)
    if golpe_1 == golpe_2:
        R.append("Empate")
    elif golpe_1 > golpe_2:
        R.append("Dabriel")
    else:
        R.append("Guarte")

for r in R:
    print(r)