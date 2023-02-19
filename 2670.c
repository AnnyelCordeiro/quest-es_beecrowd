#include<stdio.h>

int calculaMinutos(int a1, int a2, int a3);

int main() {
    int  x1, x2, x3, resultado;
     
    scanf("%i ", &x1);
    scanf("%i ", &x2);
    scanf("%i ", &x3);
calculaMinutos(x1,x2,x3);

}

int calculaMinutos(int a1, int a2, int a3){
   int acumulador[3];
    acumulador[0] = 2 * a2 + 4 * a3;
    acumulador[1] = 2 * a1 + 2 * a3;
    acumulador[2] = 2 * a2 + 4 * a1;
    
    if (acumulador[0] <= acumulador[1] && acumulador[0] <= acumulador[2]){
        printf("%i\n", acumulador[0]);
    }
    else if (acumulador[1] <= acumulador[0] && acumulador[1] <= acumulador[2]){
        printf("%i\n", acumulador[1]);
    }    
    else{
        printf("%i\n", acumulador[2]);
    }
    return 0;

}