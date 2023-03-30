#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float a, b, c, d, e, f, g;
    char x;

    printf("Escolha uma das operacoes abaixo para realizar:\n 1- Soma de 2 numeros.\n 2- Diferenca entre 2 numeros.\n 3- Produto entre 2 numeros.\n 4- Divisao entre 2 numeros.");
    x = getchar();
    printf("Digite os dois numeros para realizar a operacao escolhida");
    scanf("%f %f", &a, &b);
    
    
    switch (x){
    case '1':
        c = a+b;
        printf("A soma equivale a %f", c);
        break;
    case '2':
        d = a-b;
        e = b-a;
        if (a>b) printf("A diferença equivale a %f", d);
        else if (a<b) printf("A diferença equivale a %f", e);
        break;
    case '3':
        f = a*b;
        printf("O produto equivale a %f", f);
        break;
    case '4':
        if (b!=0){
            g = a/b;
            printf("A divisao equivale a %f", g);
        }else{
            printf("Denominador invalido");
        }
        break;
    default:
        printf("Opcao invalida");
        break;
    }
    return 0;
}