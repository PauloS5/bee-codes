def transformar(caso):
    c_under = 0
    c_aster = 0
    for c in caso:
        if c == "_":
            if c_under % 2 == 0:
                caso = caso.replace("_", "<i>", 1)
            else:
                caso = caso.replace("_", "</i>", 1)
            c_under += 1
        if c == "*":
            if c_aster % 2 == 0:
                caso = caso.replace("*", "<b>", 1)
            else:
                caso = caso.replace("*", "</b>", 1)
            c_aster += 1
    print(caso)

casos = []
while True:
    try:    
        casos.append(input())
    except EOFError:
        break

for c in casos:
    transformar(c)