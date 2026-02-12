R = ""
while True:
    try:
        match input().strip():
            case "esquerda": R += "ingles\n"
            case "direita":  R += "frances\n"
            case "nenhuma":  R += "portugues\n"
            case "as duas":  R += "caiu\n"
    except EOFError:
        break

print(end=R)