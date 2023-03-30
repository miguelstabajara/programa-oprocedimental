#include <stdio.h>
#include <stdlib.h>
int main(){
    float h, p;
    char s;

    printf("Digite seu sexo(m para mulher e h para homem) e em seguida sua altura(em metros) para descobrir seu peso ideal");
    s = getchar();
    scanf("%f", &h);
    switch (s)
    {
    case 'm':
    case 'M':
        p = (62.1*h)-44.7;
        printf("Seu peso ideal eh %f", p);
        break;
    case 'h':
    case 'H':
        p = (72.7*h)-58.0;
        printf("Seu peso ideal eh %f", p);
        break;
    default:
        printf("Sexo invalido");
        break;
    }
    return 0;
}