#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quadrado(int a);
int main(){
    int x,y;
    printf("Insira um numero inteiro positivo");
    scanf("%d",&x);
    y = quadrado(x);
    if(y==1){
        printf("Quadrado perfeito");
    }else{
        printf("Nao eh quadrado perfeito");
    }
}
int quadrado(int a){
    int num1 = sqrt(a);
    float z, num2 = sqrt(a);
    z = num2-num1;
    if(z==0) return 1;
    else if(z!=0) return 0;
}