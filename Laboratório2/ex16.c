#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    char x;

    printf("Digite um numero para descobrir seu mes correspondente");
    x = getchar();

    switch (x){
        case '1':
            printf("Janeiro"); break;
        case '2':
            printf("Fevereiro"); break;
        case '3':
            printf("Março"); break;
        case '4':
            printf("Abril"); break;
        case '5':
            printf("Maio"); break;
        case '6':
            printf("Junho"); break;
        case '7':
            printf("Julho"); break;
        case '8':
            printf("Agosto"); break;
        case '9':
            printf("Setembro"); break;
        case '10':
            printf("Outubro"); break;
        case '11':
            printf("Novembro"); break;
        case '12':
            printf("Dezembro"); break;
        default:
            printf("O numero nao equivale a um mes");
    }
    return 0;
}