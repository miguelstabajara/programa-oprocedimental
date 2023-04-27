#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int soman(int x,int y);
int main(){
   int x,y,soma;
   printf("Digite o intervalo da soma");
   scanf("%d %d",&x,&y);
   soma = soman(x,y);
   printf("A soma dos numeros do intervalo equivale a %d", soma);
}
int soman(int x, int y){
    int i, soma1=0;
    for(i=x; i <= y; i++){
        soma1 += i;
    }
    return soma1;
}