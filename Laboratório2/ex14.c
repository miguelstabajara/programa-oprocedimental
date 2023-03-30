#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float x,y,z,m;

    printf("Digite suas notas para calcular a media e verificar aprovacao");
    scanf("%f %f %f", &x, &y, &z);

    
    if (x<=10&&x>=0&&y<=10&&y>=0&&z<=10&&z>=0){
        m = ((x*2)+(y*3)+(z*5))/10;
        
        if (m>=0&&m<=2.9) printf("Voce esta reprovado");
        else if (m>=3&&m<=4.9) printf("Voce esta de recuperacao");
        else if (m>=5) printf("Voce esta aprovado");
        
    }else{
        printf("Notas invalidas");
    }
    return 0;
}