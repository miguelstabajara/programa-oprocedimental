#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[8],x,y,i,soma;
    printf("Digite os valores do vetor\n");
    for(i=0;i<8;i++){
        scanf("%d",&vet[i]);
    }
    printf("Escolha duas posicoes do vetor para realizar a soma\n");
    scanf("%d %d",&x,&y);
    soma = vet[x]+vet[y];
    printf("A soma equivale a %d",soma);
}