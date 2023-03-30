#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b;
    char x[2];
    
    printf("Digite a sigla do seu estado");
    gets(x);
    printf("Digite o valor do produto para aplicar o imposto estadual");
    scanf("%f", &a);
    
    if (((x[0]=='s')||(x[0]=='S'))&&((x[1]=='p')||(x[1]=='P'))){
        b = a*0.12+a;
        printf("O valor do produto com imposto equivale a %f", b);
    } 
    else if(((x[0]=='m')||(x[0]=='M'))&&((x[1]=='g')||(x[1]=='G'))){
        b = a*0.07+a;
        printf("O valor do produto com imposto equivale a %f", b);
    }
    else if(((x[0]=='r')||(x[0]=='R'))&&((x[1]=='j')||(x[1]=='J'))){
        b = a*0.15+a;
        printf("O valor do produto com imposto equivale a %f", b);
    }
    else if(((x[0]=='m')||(x[0]=='M'))&&((x[1]=='s')||(x[1]=='S'))){
        b = a*0.08+a;
        printf("O valor do produto com imposto equivale a %f", b);
    }
    else{
        printf("Valor invalido");
    }
    
    return 0;
}