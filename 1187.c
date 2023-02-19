#include<stdio.h>

#define MAX 12

void lermatriz();

 char C;

int main(){

    scanf("%c",&C);

    lermatriz();
}

    void lermatriz(){

        double N[MAX][MAX];
        double soma;


        for(int i = 0; i < MAX; i++)
            for(int j = 0; j < MAX; j++)

                scanf("%lf", &N[i][j]);


        for(int i = 0; i <= 4; i++)
            for(int j = i + 1; j <= 10 - i ; j++)

               soma += N[i][j];

                if (C == 'M')
                soma = soma / 30;

            printf("%.1lf\n",soma);
}