#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int x,y,z;

    printf("Insira um numero para verificar se o numero eh divisivel por 3 ou 5, mas nao simultaneamente pelos dois");
    scanf("%d", &x);

    y=x%3;
    z=x%5;
    
    if (y==0&&z==0) printf("O numero eh divisivel simultaneamente por 3 e 5");
    else if (y==0&&z!=0) printf("O numero eh divisivel por 3");
    else if (y!=0&&z==0) printf("O numero eh divisivel por 5");
    else printf("O numero nao eh divisivel nem por 3 nem por 5");
    return 0;
}