#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pi, *pj, j, i;
    printf("Digite dois valores inteiros");
    scanf("%d %d",&i,&j);
    pi = &i;
    pj = &j;
    if(*pi>*pj){
        printf("O maior numero eh %d",*pi);
    }else if(*pi<*pj){
        printf("O maior numero eh %d",*pj);
    }else{
        printf("Os numeros sao iguais");
    }
        
    
}