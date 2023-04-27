#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float media(char letra, float x, float y, float z);
int main(){
    float x,y,z,m;
    char letra;
    printf("Insira suas notas");
    scanf("%f %f %f",&x,&y,&z);
    printf("Insira o modelo de media\n -'P' para media ponderada\n -'A' para media aritmetica\n");
    scanf(" %c",&letra);
    m = media(letra,x,y,z);
}
float media(char letra, float x, float y, float z){
    if((letra=='a')||(letra=='A')){
        float m;
        m = (x+y+z)/3;
        printf("Sua media aritmetica equivale a %f",m);
    }else if((letra=='p')||(letra=='P')){
        float m;
        m = ((5*x)+(3*y)+(2*z))/10;
        printf("Sua media ponderada equivale a %f",m);
    }else{
        printf("Opcao invalida");
    }
}