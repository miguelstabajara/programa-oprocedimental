#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[10],i,primo,j,div;
    printf("Digite os valores do vetor\n");
    for(i=0;i<10;i++){
        scanf("%d",&vet[i]);
    }
    for(i=0;i<10;i++){
        primo = 0;
        for(j=1;j<=vet[i];j++){
            div = vet[i]%j;
            if(div==0){
                primo = primo+1;
            }
        }
        if(primo==2){
            printf("O numero %d eh primo e esta na posicao %d\n",vet[i],i);
        }
    }
}