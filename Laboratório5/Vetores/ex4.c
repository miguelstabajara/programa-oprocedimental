#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5],i,maior, menor;
    printf("Digite os valores do vetor\n");
    for(i=0;i<5;i++){
        scanf("%d",&vet[i]);
    }
    maior = vet[0];
    menor = vet[0];
    for(i=0;i<5;i++){
        if(vet[i]>maior){
            maior = i;
        }

        if(vet[i]<menor){
            menor = i;
        }
    }
    printf("%d %d",maior,menor);
}