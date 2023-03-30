#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float x,y,z,a;

    printf("Digite a base maior, a base menor e a altura para calcular a area do trapezio");
    scanf("%f %f %f", &x, &y, &z);

    if (x>0&&y>0){
        a = ((x+y)*z)/2;
        printf("A area do trapezio eh %f", a);
    }
    else{
        printf("As bases sao invalidas");
    }
    return 0;
}