#include <stdio.h>
#include <stdlib.h>
int main(){
    int x, y;

    printf("Digite um numero para descobrir se eh par ou impar.");
    scanf("%d", &x);
    y = x%2;

    if (y==0){
        printf("O numero eh par");
        }
        else{
        printf("O numero eh impar");
        }
    return 0;
}