#include <stdio.h>
#include <stdlib.h>
int main(){
    int x, y=0;

    printf("Digite um numero inteiro para realizar a soma dos seus algarismos");
    scanf("%d", &x);

    if (x>0){
        while (x>0)
        {
         y = y + x%10;
         x = x/10;   
        }
        printf("A soma dos algarismos equivale a %d", y);
    }
    else{
        printf("Numero invalido");
    }
    return 0;
}