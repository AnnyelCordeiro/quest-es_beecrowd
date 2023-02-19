import math
l=input().split()
a,b,c=l
a=float(a)
b=float(b)
c=float(c)
bkra=(b**2)-(4*a*c)

if bkra<0 or a==0:
    print('Impossivel calcular')
else:
    r1=(-b+math.sqrt(bkra))/(2*a)
    r2=(-b-math.sqrt(bkra))/(2*a)
    print(f'R1 = {r1:.5f}')
    print(f'R2 = {r2:.5f}')