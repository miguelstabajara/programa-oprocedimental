#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float x,y,z,m;

    printf("Digite suas notas para calcular a media ponderada com peso");
    scanf("%f %f %f", &x, &y, &z);

    m = (x+y+(2*z))/4;
    if (m>=60){
        printf("Voce foi aprovado, sua nota equivale a %f", m);
    }
    else{
        printf("Voce foi reprovado, sua nota equivale a %f", m);
    }
    return 0;
}