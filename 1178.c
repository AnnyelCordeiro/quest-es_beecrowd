#include<stdio.h>

double x, N[100];

void preencheVetor();
void imprimeVetor();

int main(){
    
    scanf("%lf", &x);
    N[0]= x;
    
    preencheVetor();
    imprimeVetor();
    
    return 0;
}

void preencheVetor(){

    int i;
    for(i=1;i<99;i++){
        N[i] = N[i-1]/2;
    }
}
void imprimeVetor(){

    int i;
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n", i, N[i]);
}

}