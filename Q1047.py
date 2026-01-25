h_inicial, m_inicial, h_final, m_final = map(int, input().split())

ttl_m_inicial = h_inicial*60 + m_inicial
ttl_m_final = h_final*60 + m_final

ttl_m_jogo = (24 * 60) - ttl_m_inicial + ttl_m_final

if ttl_m_jogo > (24 * 60):
    ttl_m_jogo -= (24 * 60)

h_duracao = int(ttl_m_jogo / 60)
m_duracao = ttl_m_jogo % 60

print(f"O JOGO DUROU {h_duracao} HORA(S) E {m_duracao} MINUTO(S)")
