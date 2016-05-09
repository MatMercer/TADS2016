print("                  ")
print("  CALCULADORA     ")
print("            PIKA  ")
print("      3000        ")
print("                  ")

#funcoes

def extractPorc(x, porc):
    return((x/100) * porc)

def getPorc(x, total):
    return((x*100)/total)

def amostraPropExtratificada(quantidade, populacao, tamanhoAmostra):
    return((((quantidade*100)/populacao) / 100) * tamanhoAmostra)

def media(ls):
    y = 0
    for x in range(0, len(ls)):
        y += ls[x]
    return y/len(ls)

def modulo(x):
    if(x < 0):
        return -x
    else:
        return x

def desvioMedio(ls):
    m = media(ls)
    y = 0
    for i in range(0, len(ls)):
        y += modulo(ls[i] - m)
    return y/len(ls)

def variancia(ls):
    m = media(ls)
    y = 0
    for i in range(0, len(ls)):
        y += (ls[i] - m)**2
    return y/len(ls)

def desvioPadrao(ls, u = 2):
    return variancia(ls)**(1/u)

def mediaPonderada(ls, p = None):
    x = 0
    y = 0
    if(not p):
        for i in range(0, len(ls)):
            y += ls[i]
        return y/len(ls)

    if(len(ls) != len(p)):
        print("Os pesos devem ter o mesmo tamanho!")
        print(str(ls) + "\n" + str(p))
        return 0
    
    for i in range(0, len(ls)):
        x += p[i]
        y += ls[i] * p[i]

    return y/x



#msg boas vindas
print("Funcoes desta calculadora:")

for func in dir():
    if(func[0] != '_' and func != 'os' and func != 'call'):
        print("|-| " + func)
