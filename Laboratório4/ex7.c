#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float temperatura(float a);
int main(){
    float c,f;
    printf("Insira as horas minutos e segundos");
    scanf("%f",&c);
    f = temperatura(c);
    printf("A temperatura em fahrenheit equivale a %f",f);
}
float temperatura(float a){
    float f = ((a*9)/5)+32;
    return f;
}