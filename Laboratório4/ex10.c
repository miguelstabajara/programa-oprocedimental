#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maior(float x, float y);
int main(){
    float x,a,b;
    printf("Insira dois numeros");
    scanf("%f %f",&a,&b);
    x = maior(a,b);
    if(x==1) printf("%.3f eh maior que %.3f",a,b);
    else if(x==-1) printf("Sao iguais");
    else if(x==0) printf("%.3f eh maior que %.3f",b,a);
}
int maior(float x, float y){
    if(x>y) return 1;
    else if(x==y) return -1;
    else if(x<y) return 0;
}
