#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,x,soma=0,n;
    printf("Digite um numero natural inteiro");
    scanf("%d", &x);

    for(i=1;i<x;i++){
        n = x%i;
        if(n==0){
            soma += i;
        }
    }
    printf("%d", soma);

    return 0;
}