N=int(input())
print(N)

cem=int(N/100)
N=N-cem*100
cinquenta=int((N//50))
N=N-cinquenta*50
vinte=int((N//20))
N=N-vinte*20
dez=int((N//10))
N=N-dez*10
cinco=int((N//5))
N=N-cinco*5
dois=int((N//2))
N=N-dois*2
um=int((N//1))
N=N-um*1
print(f'{cem} nota(s) de R$ 100,00')
print(f'{cinquenta} nota(s) de R$ 50,00')
print(f'{vinte} nota(s) de R$ 20,00')
print(f'{dez} nota(s) de R$ 10,00')
print(f'{cinco} nota(s) de R$ 5,00')
print(f'{dois} nota(s) de R$ 2,00')
print(f'{um} nota(s) de R$ 1,00')