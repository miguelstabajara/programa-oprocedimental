#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x, y, z;

    printf("Digite um numero positivos para exibir as seguintes operacoes:\n -O quadrado do numero;\n -A raiz do numero.");
    scanf("%f", &x);

    if (x>=0){
        y = sqrt(x);
        z = x*x;
        printf("-A raiz quadrada equivale a %f \n -O quadrado equivale a %f", y, z);
        }
    return 0;
}