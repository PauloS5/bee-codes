alfabeto = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
R = ""
while True:
    try:
        n = int(input())

        for _ in range(n):
            mensagem = input().split()
            R += alfabeto[((len(mensagem)-1)*3 + (len(mensagem[0])-1))] + "\n"
    except EOFError:
        break
print(end=R)