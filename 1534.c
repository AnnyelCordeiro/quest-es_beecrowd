#include <stdio.h>
#include <stdlib.h>

void percorreMatriz();
void exibeMatriz(int N, int M[N][N]);

int main()
{
    percorreMatriz();
    
    return 0;
}

void percorreMatriz()
{
    int k, i, j, N;

    while(scanf("%d",&N)!=EOF)
    {
        if (N>=3 && N < 70)
        {
            int M[N][N];

            k = N-1;
        
            for(i = 0; i < N; i++)
            {
                for(j = 0; j < N; j++)
                {
                    if(i==j)
                    {
                        M[i][j]=1;
                    }   
                    else
                    {
                        M[i][j]=3;
                    } 
                    if(j==k)
                    {
                        M[i][j]=2;
                    }
                    
                }
                k--;
            }

            exibeMatriz(N, M);
        }

    }
}

void exibeMatriz(int N, int M[N][N])
{
    int i, j;

    for(i = 0;i < N; i++)
    {
        for(j = 0;j < N; j++)
        {
            printf("%d", M[i][j]);
        }
        printf("\n");
    }
}