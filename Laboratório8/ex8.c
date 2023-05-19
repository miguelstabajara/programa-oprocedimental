#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[6],i;
    int *p;
    for(i=0;i<6;i++){
        printf("Digite um valor inteiro pra posicao do vetor %d\n",i+1);
        scanf("%d",&vet[i]);
    }
    p = vet;
    for(i=0;i<6;i++){
        printf("O valor da posicao %d equivale a %d\n",i+1,p[i]);
        printf("O endereco de memoria desse numero equivale a %p\n",p+i);

    }
}