I = 0.0
while I <= 2.0:
    for num in range(1, 4):
        if any([round(I, 1) == 0.0, round(I, 1) == 1.0, round(I, 1) == 2.0]):
            print(f"I={round(I, 0):.0f}", end=" ")
        else:
            print(f"I={I:.1f}", end=" ")
        
        J = num + I
        if any([J == 0.0, J == 1.0, J == 2.0, J == 3.0, J == 4.0, J == 5.0]):
            print(f"J={int(J)}")
        else:
            print(f"J={J:.1f}")
    I += 0.2