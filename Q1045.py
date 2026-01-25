def main():
    a, b, c = sorted(list(map(float, input().split())), reverse=True)

    if a >= b+c:
        print("NAO FORMA TRIANGULO")
        return
    
    if a**2 == b**2 + c**2:
        print("TRIANGULO RETANGULO")
    if a**2 > b**2 + c**2:
        print("TRIANGULO OBTUSANGULO")
    if a**2 < b**2 + c**2:
        print("TRIANGULO ACUTANGULO")
        
    if a == b and b == c:
        print("TRIANGULO EQUILATERO")
    elif (a == b) ^ (b == c) ^ (a == c):
        print("TRIANGULO ISOSCELES")

main()
