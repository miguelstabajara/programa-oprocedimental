#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;

    printf("Digite o preco antigo para calcular seu atual preco");
    scanf("%f", &x);

    if(x<50.0){
        y = x*0.05+x;
    }else if((x>=50.0)&&(x<=100.0)){
        y = x*0.10+x;
    }else if(x>100.0){
        y = x*0.15+x;
    }

    if(y<80.0){
        printf("Novo preco: %f\n Barato",y);
    }else if((y>=80.0)&&(y<=120.0)){
        printf("Novo preco: %f\n Normal",y);
    }else if((y>120.0)&&(y<=200.0)){
        printf("Novo preco: %f\n Caro",y);
    }else if(y>200){
        printf("Novo preco: %f\n Caro",y);
    }
}