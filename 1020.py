n=int(input())

ano=n//365
mes=(n%365)//30
n=n-mes*30
dia=(n%365)

print(f'{ano} ano(s)')
print(f'{mes} mes(es)')
print(f'{dia} dia(s)')