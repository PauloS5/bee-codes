def main():
    x, y = map(float, input().split())
    
    if x == 0.0 and y == 0.0:
        print("Origem")
        return
        
    if (x == 0.0):
        print("Eixo Y")
        return
    if (y == 0.0):
        print("Eixo X")
        return
        
    if (x > 0.0 and y > 0.0):
        print("Q1")
        return
    if (x > 0.0 and y < 0.0):
        print("Q4")
        return
    if (x < 0.0 and y > 0.0):
        print("Q2")
        return
    if (x < 0.0 and y < 0.0):
        print("Q3")
        return

main()
