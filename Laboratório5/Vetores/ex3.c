#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[6],x,y,i;
    printf("Digite os valores do vetor\n");
    for(i=5;i>=0;i--){
        scanf("%d",&vet[i]);
    }
    for(i=0;i<6;i++){
        printf("%d\n",vet[i]);
    }
}
