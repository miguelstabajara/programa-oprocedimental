#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int soma(int x);
int main(){
    int x,y;
    printf("Insira um numero");
    scanf("%d",&x);
    if(x>0){
        y = soma(x);
        printf("%d",y);
    }else{
        printf("Numero invalido");
    }
}
int soma(int x){
    int var=0;
    while(x>0){
        var = var+x%10;
        x = x/10;
    }
    return var;
}