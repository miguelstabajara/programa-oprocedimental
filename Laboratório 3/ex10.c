#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,soma=0,n;
    for(i=1;i<=50;i++){
    soma = soma+(i*2);
    }
    soma = soma-50;
    printf("%d",soma);


    return 0;
}