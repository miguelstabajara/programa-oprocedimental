#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa(float x, float y);
int main(){
    float a,b,h;
    printf("Insira os valores dos catetos");
    scanf("%f %f",&a,&b);
    h = hipotenusa(a,b);
    printf("A hipotenusa equivale a %f",h);
}
float hipotenusa(float x, float y){
    float h = sqrt((x*x)+(y*y));
    return h;
}