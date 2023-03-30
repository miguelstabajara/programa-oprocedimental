#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d;
    printf("Digite o ano para saber se eh bissexto");
    scanf("%d", &a);
    b = a%400;
    c = a%4;
    d = a%100;
    if (((b==0)||(c==0))&&(d!=0)) printf("O ano eh bissexto");
    else printf("O ano nao eh bissexto");
    
    return 0;
}