x=input().split()
cod,quant=x
cod=int(cod)
quant=int(quant)

if cod==1:
    valor=4
if cod==2:
    valor=4.50
if cod==3:
    valor=5
if cod==4:
    valor=2
if cod ==5:
    valor=1.5
res=valor*quant
print(f'Total: R$ {res:.2f}')