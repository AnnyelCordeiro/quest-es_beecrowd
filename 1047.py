x =input().split()
hora1, minuto1, hora2, minuto2 =x
hora1=int(hora1) 
minuto1=int(minuto1) 
hora2=int(hora2) 
minuto2=int(minuto2) 

if(hora1 < hora2):
    tempo = hora2 - hora1
    if(minuto1 < minuto2):
        minuto = minuto2 - minuto1
    if minuto1 > minuto2:
        tempo = tempo - 1
        minuto=(60 - minuto1)+minuto2
    if(minuto1==minuto2):
        minuto=0
if(hora1 > hora2):
    tempo = (24 - hora1)+hora2      
    if(minuto1 < minuto2):
        minuto = minuto2 - minuto1
    if minuto1 > minuto2:
        tempo = tempo - 1
        minuto=(60 - minuto1)+minuto2
    if(minuto1==minuto2):
        minuto=0
if(hora1 == hora2):
    if(minuto1 < minuto2):
        minuto = minuto2 - minuto1
        tempo=0
    if minuto1 > minuto2:
        minuto=(60 - minuto1)+minuto2    
        tempo = 23
    if(minuto1==minuto2):
        tempo = 24
        minuto=0   
print(f'O JOGO DUROU {tempo} HORA(S) E {minuto} MINUTO(S)')