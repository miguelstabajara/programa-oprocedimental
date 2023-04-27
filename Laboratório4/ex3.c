#include <stdio.h>
#include <stdlib.h>

int inteiro(int a);
int main(){
    int x,y;
    printf("Insira um numero");
    scanf("%d",&x);
    y = inteiro(x);
    if(y==-1) printf("Numero negativo");
    else if(y==0) printf("Zero");
    else if(y==1) printf("Numero positivo");
}
int inteiro(int a){
    if(a<0) return -1;
    else if(a==0) return 0;
    else if(a>0) return 1;
}