#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[10],i,j;
    printf("Digite os valores do vetor\n");
    scanf("%d",&vet[0]);
    for(i=1;i<10;i++){
        scanf("%d",&vet[i]);
        for(j=0;j<i;j++){
            if(vet[j]==vet[i]){
                printf("Digite um numero diferente");
                scanf("%d",&vet[i]);
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d\n",vet[i]);
    }
}
