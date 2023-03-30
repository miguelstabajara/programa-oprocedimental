#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x, y;

    printf("Digite um numero para calcular sua raiz\n");
    scanf("%f", &x);

    if (x>=0){
        y = sqrt(x);
        printf("O raiz do numero equivale a %f", y);
        }
        else{
            printf("O numero eh invalido");
            }
    return 0;
}