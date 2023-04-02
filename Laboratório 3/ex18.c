#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,a,af;
    float salario_atual=2000,aumento,taxa;
    
    printf("Insira o ano atual");
    scanf("%d",&af);
    a = af-1995;
    taxa = 0.015;
    for(i=0;i<=a;i++){
        if(a==1){
            aumento = salario_atual+(salario_atual*taxa);
        }else{
            taxa = taxa*2;
            aumento = salario_atual+(salario_atual*taxa); 
        }
    }
    printf("Seu salario atual equivale a %f",aumento);

    return 0;
}