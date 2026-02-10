R = ""
while True:
    try:
        n_stps          = int(input())
        L1_in, L2_in    = map(int, input().split())
        L1_stps         = map(int, input().split())
        L2_stps         = map(int, input().split())
        L1_to_L2        = map(int, input().split())
        L2_to_L1        = map(int, input().split())
        L1_out, L2_out  = map(int, input().split())

        # IMPLEMENTAR DEPOIS
        # ESTUDAR ESTRUTURA DE DADOS E RECURSIVIDADE

    except EOFError:
        break

print(R.strip())