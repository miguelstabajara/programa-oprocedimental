#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x,y;

    printf("Digite dois numeros para saber qual eh o maior\n");
    scanf("%f %f", &x,&y);

    if (x>y){
        printf("O numero %f é maior", x);
        }
        else{
            printf("O numero %f eh maior", y);
            }
    return 0;
}