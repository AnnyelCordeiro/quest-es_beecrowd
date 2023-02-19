x=input().split()
n1,n2,n3,n4=x

n1=float(n1)
n2=float(n2)
n3=float(n3)
n4=float(n4)

media=(n1*2+n2*3+n3*4+n4*1)/(2+3+4+1)
print(f'Media: {media:.1f}')

if media>7.0:
    print('Aluno aprovado.')
if media<5.0:
    print('Aluno reprovado.')
if 5.0<=media<=6.9:
    print('Aluno em exame.')
    notaexame=float(input())
    print(f'Nota do exame: {notaexame:.1f}')
    mediafinal=(media+notaexame)/2
    if mediafinal>=5:
        print('Aluno aprovado.')
        print(f'Media final: {mediafinal:.1f}')
    if media<5:
        print('Aluno reprovado.')
        print(f'Media final: {media:.1f}')