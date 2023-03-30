#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;

    printf("Digite a nota e quantidade de faltas para descobrir seu conceito");
    scanf("%f %f", &x,&y);

    if(y>20){
        if((x>=9.0)&&(x<=10.0)) printf("Conceito B");
        else if ((x>=7.5)&&(x<=8.9)) printf("Conceito C");
        else if ((x>=5.0)&&(x<=7.4)) printf("Conceito D");
        else if ((x>4.0)&&(x<=4.9)) printf("Conceito E");
        else if ((x>=0)&&(x<=3.9)) printf("Conceito E");
    }
    if((y<=20)&&(y>=0)){
        if((x>=9.0)&&(x<=10.0)) printf("Conceito A");
        else if ((x>=7.5)&&(x<=8.9)) printf("Conceito B");
        else if ((x>=5.0)&&(x<=7.4)) printf("Conceito C");
        else if ((x>4.0)&&(x<=4.9)) printf("Conceito D");
        else if ((x>=0)&&(x<=3.9)) printf("Conceito E");
    }
    else{
        print("Nota ou faltas invalida");
    }
}