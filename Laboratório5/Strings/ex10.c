#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    float valor,desconto,total;
    printf("Digite o nome do produto\n");
    gets(str);
    printf("Digite o valor do produto\n");
    scanf("%f",&valor);
    desconto = valor*0.1;
    total = valor-desconto;
    printf("O valor do produto %s equivale a %f\nO desconto a vista equivale a %f\nO valor com desconto equivale a %f",str,valor,desconto,total);
}


