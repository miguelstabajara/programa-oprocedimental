#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float cilindro(float x, float y);
int main(){
    float v,r,h;
    printf("Insira a altura e o raio do cilindro");
    scanf("%f %f",&h,&r);
    v = cilindro(h,r);
    printf("O volume do cilindro equivale a %f",v);
}
float cilindro(float x, float y){
    float v = 3.141592*y*y*x;
    return v;
}