#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c,d,x1,x2;
    printf("Digite o valor de a,b e c para calcular as raizes da equacao de segundo grau.\n Lembrando que equacao de segundo grau equivale a ax^2+bx+c");
    scanf("%f %f %f", &a,&b,&c);
    
    if (a!=0){
        d = (b*b)-(4*a*c);
        if(d<0){printf("Nao existe raiz real");}
        if(d==0){
            x1 = (-b)/(2*a); 
            printf("Existe apenas uma raiz e equivale a %f", x1);
        }
        if(d>=0){
            x1 = (-b+(sqrt(d)))/(2*a); 
            x2 = (-b-(sqrt(d)))/(2*a);
            printf("Existe duas raizes e equivalem a %f e %f", x1,x2);
        }

    }else{
        printf("Nao eh equacao de segundo grau");
    }
    
    return 0;
}