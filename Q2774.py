import math

R  = ""
while True:
    try:
        H, M = map(int, input().split())
        QT = int((H*60) / M)

        X = list(map(float, input().split()))

        media = sum(X)/QT


        numerador = 0
        for x in X: numerador += (x - media)**2

        denominador = QT-1

        R += f"{math.sqrt(numerador/denominador):.5f}\n"
    except EOFError:
        break

print(end=R)