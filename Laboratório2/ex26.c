#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float km,l,a;
    printf("Digite a quilometragem e a quantidade em litros gastar por um carro em um percurso");
    scanf("%f %f", &km,&l);
    a = km/l;
    
    if(a<8) printf("Venda o carro");
    else if((a>=8)&&(a<=14)) printf("Economico");
    else if(a>14) printf("Super economico");
    return 0;
}