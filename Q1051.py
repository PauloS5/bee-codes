def calcular():
    salarioInicial = float(input())
    salario = salarioInicial

    imposto = 0.0
    if (salarioInicial > 4500.0):
        imposto = 2000*0.0 + 1000*0.08 + 1500.0*0.18 + (salario-4500.0)*0.28
        return f"R$ {imposto:.2f}"    
    if (salarioInicial > 3000.0):
        imposto = 2000*0.0 + 1000*0.08 + (salario-3000.0)*0.18
        return f"R$ {imposto:.2f}"
    if (salarioInicial > 2000.0):
        imposto = 2000*0.0 + (salario-2000.0)*0.08
        return f"R$ {imposto:.2f}"
    
    return "Isento"

print(calcular())
        
