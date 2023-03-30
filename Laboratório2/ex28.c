#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c,m;
    char n;

    printf("Digite o numero para efetuar uma das operacoes abaixo: \n1-Media geometrica\n2-Media ponderada\n3-Media harmonica\n4-Media aritmetica");
    n = getchar();
    printf("Digite tres numeros inteiros positivos para calcular a media escolhida");
    scanf("%f %f %f",&a,&b,&c);
    
    switch (n){
    case '1':
        m = pow((a+b+c),(1.0/3.0));
        printf("A media geometrica equivale a%f",m);
        break;
    case '2':
        m = ((1*a)+(2*b)+(3*c))/3;
        printf("A media ponderada equivale a %f",m);
    case '3':
        m = 1/((1/a)+(1/b)+(1/c));
        printf("A media harmonica equivale a %f",m);
    case '4':
        m = (a+b+c)/3;
        printf("A media aritmetica equivale a %f",m);
    default:
        printf("Opcao invalida");
        break;
    }
    return 0;
}