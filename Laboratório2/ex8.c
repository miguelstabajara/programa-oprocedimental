#include <stdio.h>
#include <stdlib.h>
int main(){
    float x, y, z;

    printf("Insira duas notas para calcular a media.");
    scanf("%f %f", &x, &y);

    if ((x>=0)&&(x<=10)){
         if ((y>=0)&&(y<=10)){
            z = (x+y)/2;
            printf("A media equivale a %f", z);
        }
        else{
            printf("A nota %f eh invalida",y);
        }

    }
    else{
        if ((y>=0)&&(y<=10)){
            printf("A nota %f eh valida", y);
        }
        else{
            printf("A nota %f eh invalida", y);
        }
        printf("A nota %f eh invalida",x);
    }


    return 0;
}