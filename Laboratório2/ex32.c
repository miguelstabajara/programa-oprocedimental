#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int c,q;
    float v;

    printf("Escolha seu pedido pelo codigo e a quantidade(apenas um pedido por vez):\nCachorro Quente|100|1,20\nBauru Simples|101|1,30\nBauru com Ovo|102|1,50\nHambúrguer|103|1,20\nCheeseburguer|104|1,70\nSuco|105|2,20\nRefrigerante|106|1,00");
    scanf("%d %d",&c,&q);
    
    switch (c){
    case 100:
        v = q*1.20;
        printf("O valor a ser pago equivale a %f",v);
        break;
    case 101:
        v = q*1.30;
        printf("O valor a ser pago equivale a %f",v);
        break;
    case 102:
        v = q*1.50;
        printf("O valor a ser pago equivale a %f",v);
        break;
    case 103:
        v = q*1.20;
        printf("O valor a ser pago equivale a %f",v);
        break;
    case 104:
        v = q*1.70;
        printf("O valor a ser pago equivale a %f",v);
        break;
    case 105:
        v = q*2.20;
        printf("O valor a ser pago equivale a %f",v);
        break;
    case 106:
        v = q*1.00;
        printf("O valor a ser pago equivale a %f",v);
        break;
    default:
        printf("Codigo invalido");
        break;
    }
    return 0;
}