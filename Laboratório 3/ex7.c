#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, soma=0, n, m;
    i=1;
    while(i<=10){
        printf("Insira um valor\n");
        scanf("%d",&n);
        if(n>=0){
        soma = soma+n;
        ++i;
        }
    }
    m = soma/10;
    printf("A media equivale a %d\n", m);
    return 0;
}