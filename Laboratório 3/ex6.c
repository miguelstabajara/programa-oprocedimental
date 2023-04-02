#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, soma=0, n, m;
    for(i=1;i<=10;i++){
        printf("Insira um valor\n");
        scanf("%d",&n);
        soma = soma+n;
    }
    m = soma/10;
    printf("A media equivale a %d\n", m);
    return 0;
}