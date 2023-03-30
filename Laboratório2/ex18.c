#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float y,z,o;
    char x;

    printf("Escolha a operacao para calcular entre dois numeros:\n-Digite 1 para soma\n-Digite 2 para subtracao\n-Digite 3 para divisao\n-Digite 4 para multiplicacao\n");
    x = getchar();
    
    printf("Digite os dois valores da operacao");
    scanf("%f %f", &y, &z);

    switch (x){
    case '1':
        o = y+z;
        printf("A soma equivale a %f", o);
        break;
    case '2':
        o = y-z;
        printf("A subtracao equivale a %f", o);
        break;
    case '3':
        o = y/z;
        printf("A divisao equivale a %f", o);
        break;
    case '4':
        o = y*z;
        printf("A multiplicacao equivale a %f", o);
        break;
    
    default:
        printf("Numero de operacao invalida");
        break;
    }
    
    return 0;
}
