#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vet,i;

    vet = (int *) malloc(5*sizeof(int));

    printf("Digite os elementos do array");
    for(i=0;i<5;i++){
        printf("%d ",i+1);
        scanf(" %d",(vet+i));
    }

    for(i=0;i<5;i++){
        printf("%d ",*(vet+i));
    }
}