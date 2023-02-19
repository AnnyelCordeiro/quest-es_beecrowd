#include <stdio.h>
#include <string.h>

void testa(char *tolera);

int main(){
    int n, i, j=0;                          //one = 1, two = 2, three = 3
    char p[10];
    
    //quantidade de palavras informadas pelo usuario
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        setbuf(stdin,NULL);
        scanf("%s", p);
        
        testa(p);
        
    }
    
    
    return 0;
}


void testa(char *tolera){
    int quantidade,i, cont1=0, cont2=0, cont3=0;
    char um[]= "one";
    char dois[]= "two";
    char tres[] = "three";
                                    //contando a quantidade de caracteres vo vetor e contando se são iguais
    quantidade = strlen(tolera);
    
    if(quantidade == 3){
        
    for(i=0;i<quantidade;i++){
        if(*(tolera+i)==um[i]){
        cont1++;    
        }
    }
    if(cont1>1){
        printf("%d\n",1);
    }else{
        for(i=0;i<quantidade;i++){
        if(*(tolera+i)==dois[i]){
            cont2++;
        }
    
    }
    if(cont2>1){
        printf("%d\n", 2);
    }else{
        printf("\n");
    }        
    }
    }

if(quantidade == 5){
for(i=0;i<quantidade;i++){
        if(*(tolera+i)==tres[i]){
        cont3++;    
        }
    }
    if(cont3>1){
        printf("%d\n",3);

}else{
    printf("\n");
}
}
}