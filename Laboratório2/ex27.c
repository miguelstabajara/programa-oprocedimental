#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a;
    printf("Insira sua idade para receber sua classificacao");
    scanf("%f", &a);
    
    if((a>=5)&&(a<=7)) printf("Categoria infantil A");
    else if((a>=8)&&(a<=10)) printf("Categoria infantil B");
    else if((a>=11)&&(a<=13)) printf("Categoria juvenil A");
    else if((a>=14)&&(a<=17)) printf("Categoria juvenil B");
    else if(a>=18) printf("Categoria senior");

    return 0;
}