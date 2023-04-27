#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float esfera(float a);
int main(){
    float r,v;
    printf("Insira um numero inteiro positivo");
    scanf("%f",&r);
    v = esfera(r);
    printf("O volume equivale a %f",v);
}
float esfera(float a){
    float v;
    return v = (4*3.14*a*a*a)/3;
}