R = ""
while True:
    try:
        c, n = map(int, input().split())
        cifra1 = list(input().strip())
        cifra2 = list(input().strip())
        for _ in range(n):
            frase = input()
            for car in frase:
                if car.upper() in cifra1:
                    if car.islower() or not car.isalpha():
                        R += cifra2[cifra1.index(car.upper())].lower()
                    else:
                        R += cifra2[cifra1.index(car.upper())]
                elif car.upper() in cifra2:
                    if car.islower() or not car.isalpha():
                        R += cifra1[cifra2.index(car.upper())].lower()
                    else:
                        R += cifra1[cifra2.index(car.upper())]
                else:
                    R += car
            R += "\n"
        R += "\n"
    except EOFError:
        break
print(R, end="")