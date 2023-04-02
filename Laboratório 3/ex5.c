#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, soma=0, n;
    for(i=1;i<=10;i++){
        printf("Insira um valor\n");
        scanf("%d",&n);
        soma = soma+n;
    }
    printf("%d\n", soma);
    return 0;
}