#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;

    printf("Digite o valor da venda para calcular sua comissao");
    scanf("%f", &x);

    if(x>=100000.0){
        y = 700+(x*0.16);
        printf("A comissao equivale a %f",y);
    }else if((x>=80000.0)&&(x<100000.0)){
        y = 650+(x*0.14);
        printf("A comissao equivale a %f",y);
    }else if((x>=60000.0)&&(x<80000.0)){
        y = 600+(x*0.14);
        printf("A comissao equivale a %f",y);
    }else if((x>=40000.0)&&(x<60000.0)){
        y = 550+(x*0.14);
        printf("A comissao equivale a %f",y);
    }else if((x>=20000.0)&&(x<40000.0)){
        y = 500+(x*0.14);
        printf("A comissao equivale a %f",y);
    }else if(x<20000.0){
        y = 400+(x*0.14);
        printf("A comissao equivale a %f",y);
    }
    return 0;
}