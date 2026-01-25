"""
Dia 5
08 : 12 : 23
Dia 9
06 : 13 : 23
"""

ini_dia = int(input().split()[1])
ini_hor, ini_min, ini_sec = map(int, input().split(' : '))

fim_dia = int(input().split()[1])
fim_hor, fim_min, fim_sec = map(int, input().split(' : '))


ttl_sec = (60 - ini_sec + fim_sec) % 60

ttl_min = (60 - ini_min + fim_min) % 60
if ini_sec > fim_sec:
    ttl_min -= 1

ttl_hor = (24 - ini_hor + fim_hor) % 24
if ini_min > fim_min:
    if ttl_hor == 0:
        ttl_hor = 24
    ttl_hor -= 1

ttl_dia = fim_dia - ini_dia
if ttl_hor == 23:
    ttl_dia -= 1
if ini_hor > fim_hor:
    ttl_dia -= 1


print(f"{ttl_dia} dia(s)")
print(f"{ttl_hor} hora(s)")
print(f"{ttl_min} minuto(s)")
print(f"{ttl_sec} segundo(s)")