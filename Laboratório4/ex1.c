#include <stdio.h>
#include <stdlib.h>

float dobro(float a);
int main(){
    float x,y;
    printf("Digite um numero para imprimir seu dobro");
    scanf("%f",&x);
    y = dobro(x);
    printf("O dobro equivale a %f",y);

}
float dobro(float a){
    return 2*a;
}