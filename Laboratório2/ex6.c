#include <stdio.h>
#include <stdlib.h>
int main(){
    int x, y, z;

    printf("Insira dois numeros inteiros para descobrir qual o maior e  diferenca entre eles.");
    scanf("%d %d", &x, &y);

    if (y>x){
        z = y-x;
        printf("O numero %d eh maior\n A diferenca entre os numeros equivale a %d", y, z);
        }
        else{
        z = x-y;
        printf("O numero %d eh maior\n A diferenca entre os numeros equivale a %d", x, z);
        }
    return 0;
}