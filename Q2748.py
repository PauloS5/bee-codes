def gerarTexto(n, texto):
    return "".join([texto for _ in range(n)])

print(gerarTexto(39, "-"))

print(end="|")
print(end=gerarTexto(8, " "))
print(end="Roberto")
print(end=gerarTexto(22, " "))
print("|")

print(end="|")
print(end=gerarTexto(37, " "))
print("|")

print(end="|")
print(end=gerarTexto(8, " "))
print(end="5786")
print(end=gerarTexto(25, " "))
print("|")

print(end="|")
print(end=gerarTexto(37, " "))
print("|")

print(end="|")
print(end=gerarTexto(8, " "))
print(end="UNIFEI")
print(end=gerarTexto(23, " "))
print("|")
print(gerarTexto(39, "-"))