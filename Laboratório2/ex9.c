#include <stdio.h>
#include <stdlib.h>
int main(){
    float x, y, z;

    printf("Digite seu salario e o valor da prestacao do emprestimo");
    scanf("%f %f", &x, &y);

    z = x*0.20;
    if (y>z){
        printf("Emprestimo nao concedido");
    }
    else{
        printf("Emprestimo cocedido");
    }
    return 0;
}