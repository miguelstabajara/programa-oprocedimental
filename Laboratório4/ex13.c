#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int operacao(int x, int y, char op);
int main(){
    int x,y;
    char op;
    printf("Insira um numero");
    scanf("%d %d",&x,&y);
    printf("Insira o operador desejado\n-Simbolo '-' para subtracao\n-Simbolo '+' para soma\n-Simbolo'*' para multiplicacao\nSimbolo'/'para divisao\n");
    scanf(" %c",&op);
    y = operacao(x,y,op);
    if(y!='c'){
        printf("O resultado da operacao escolhida eh %d",y);
    }
    
}
int operacao(int x,int y, char op){
    if(op=='+') return x+y;
    else if(op=='-') return x-y;
    else if((op=='/')&&(y!=0)) return x/y;
    else if(op=='*') return x*y;
    else{
        printf("Operacao invalida");
        return 'c';
    }
}