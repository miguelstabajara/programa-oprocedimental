#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[6],i,primo,j,somapar = 0,somaprimo=0;
    printf("Digite os valores do vetor\n");
    for(i=0;i<6;i++){
        scanf("%d",&vet[i]);
    }
    for(i=0;i<6;i++){
        if((vet[i]%2)==0){
            printf("O numero %d eh par\n",vet[i]);
            somapar = somapar+vet[i];
        }else{
            printf("O numero %d eh impar\n", vet[i]);
            somaprimo = somaprimo+1;
        }
    }
    printf("A quantidade de numeros primos eh %d\n",somaprimo);
    printf("A soma dos numeros pares eh %d\n",somapar);
}