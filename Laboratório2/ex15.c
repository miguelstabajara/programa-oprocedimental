#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    char x;

    printf("Digite um numero entre 1 e 7 para descobrir seu dia da semana");
    x = getchar();

    switch (x)
    {
    case '1':
        printf("Domingo"); break;
    case '2':
        printf("Segunda-feira"); break;
    case '3':
        printf("Terca-feira"); break;
    case '4':
        printf("Quarta-feira"); break;
    case '5':
        printf("Quinta-feira"); break;
    case '6':
        printf("Sexta-feira"); break;
    case '7':
        printf("Sabado"); break;
    }
    return 0;
}