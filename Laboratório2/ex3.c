#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x, y;

    printf("Digite um numero para seguir as  regras:\n -Caso seja positivo, sera exibida  raiz;\n -Caso seja negativo, sera exibido o quadrado do numero.");
    scanf("%f", &x);

    if (x>=0){
        y = sqrt(x);
        printf("O raiz do numero equivale a %f", y);
        }
        else{
            y = x*x;
            printf("O quadrado do numero equivale a %f \n", y);
            }
    return 0;
}