#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5],x,i;
    vet[0]=1;
    vet[1]=0;
    vet[2]=5;
    vet[3]=-2;
    vet[4]=7;
    x = vet[0]+vet[1]+vet[5];
    printf("A soma das posicoes 0,1 e 5 equivalem a: %d\n",x);

    vet[3]=100;

    for(i=0;i<5;i++){
        printf("%d\n", vet[i]);
    }
}