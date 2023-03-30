#include <stdio.h>
#include <stdlib.h>
int main(){
    float x, y;

    printf("Insira dois numeros inteiros para descobrir qual o maior.");
    scanf("%f %f", &x, &y);

    if (y==x){
        printf("Os numeros sao iguais");
    }
        else{
            if (y>x){
                printf("O numero %f eh maior", y);
            }
                else{
                    printf("O numero %f eh maior", x);
                }

        }
    return 0;
}