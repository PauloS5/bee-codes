R = ""
while True:
    try:
        n_amigos, n_datas = map(int, input().split())

        datas = []
        relacoes = []
        for _ in range(n_datas):
            data, relacao = input().split(maxsplit=1)

            datas.append(data)
            relacoes.append(list(map(lambda x: bool(int(x)), relacao.split())))
        
        achou = False
        for i in range(n_datas):
            if all(relacoes[i]):
                R += datas[i] + "\n"
                achou = True
                break
        if not achou:
            R += "Pizza antes de FdI\n"
    except EOFError:
        break   

print(end=R)