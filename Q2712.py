import re

n = int(input())

R = ""
for _ in range(n):
    placa = input()
    if re.match(r"^[A-Z]{3}-[0-9]{4}$", placa):
        if placa[7] in ("1", "2"):
            R += "MONDAY\n"
        elif placa[7] in ("3", "4"):
            R += "TUESDAY\n"
        elif placa[7] in ("5", "6"):
            R += "WEDNESDAY\n"
        elif placa[7] in ("7", "8"):
            R += "THURSDAY\n"
        else:
            R += "FRIDAY\n"
    else:
        R += "FAILURE\n"
print(end=R)