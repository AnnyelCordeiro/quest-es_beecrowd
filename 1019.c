#include <stdio.h>

void calculartempo();

struct Tempo{
    int hora;
    int minutos;
    int segundos;
};


int main(){

calculartempo();

}

void calculartempo(){

int T, H, H_S, M, S;

H_S=3600;

scanf("%d", &T);

H=(T/H_S);

M=(T -(H_S*H))/60;

S= (T-(H_S*H)-(M*60));

printf("%d:%d:%d\n",H,M,S);

}