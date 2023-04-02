#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i;
    float n,q,c,r;

    for(i=1;;i++){
        printf("Digite um numero para calcular sua raiz, seu quadrado e seu cubo\n");
        scanf("%f",&n);
        if(n>0){
            r = sqrt(n);
            q = n*n;
            c = n*n*n;
            printf("A raiz equivale a %f, o quadrado equivale a %f e o cubo equivale a %f\n", r,q,c);
        }else{
            break;
        }
    }

    return 0;
}