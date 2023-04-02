#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n,impar;
    printf("Digite um numero\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        impar = 2*i+1;
        printf("%d\n", impar);
    }

    return 0;
}