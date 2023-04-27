#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int segundos(int a, int b, int c);
int main(){
    int h,m,s,seg;
    printf("Insira as horas minutos e segundos");
    scanf("%d %d %d",&h,&m,&s);
    seg = segundos(h,m,s);
    printf("Total de segundos eh %d",seg);
}
int segundos(int a, int b, int c){
    int z;
    z = (a*3600)+(b*60)+c;
    return z;
}