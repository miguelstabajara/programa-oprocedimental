#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x;
    float y;

    printf("Digite um numero inteiro para calcular seu logaritmo");
    scanf("%d", &x);

    if (x>0){
        y = log10((float)x);
        printf("O logaritmo equivale a %f", y);
    }
    else{
        printf("Numero invalido");
    }
    return 0;
}