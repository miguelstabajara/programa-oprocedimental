#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float i,r,acertos=0,num1,num2;

    
    for(i=1; i<=5;i++){
        num1 = rand()%100+1;
        num2 = rand()%100+1;
        printf("Insira a soma dos numeros %f e %f", num1,num2);
        scanf("%f", &r);
        if(r==(num1+num2)){
            ++acertos;
            printf("Voce acertou");
        }else{
            printf("Voce errou, o resultado equivale a %f", num1+num2);
        }
    }
    printf("Voce acertou %f questoes", acertos);

    return 0;
}