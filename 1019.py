n=int(input())
hs=3600

h=n//hs
m=(n-(hs*h))//60
s=(n-(hs*h)-(m*60))
print(f'{h}:{m}:{s}')