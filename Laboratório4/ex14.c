#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void km_litro(float km, float l);
int main(){
   float km, l;
   printf("Digite os quilometros rodados e a quantidade de litros de gasolina usadas em um percurso");
   scanf("%f %f",&km, &l);
   km_litro(km,l);
}
void km_litro(float km,float l){
    float kml;
    kml = km/l;
    if(kml<8) printf("Venda o carro!");
    else if((kml>=8)&&(kml<=14)) printf("Economico!");
    else if(kml>14) printf("Super economico!");
}