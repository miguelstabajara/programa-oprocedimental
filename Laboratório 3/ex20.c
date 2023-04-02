#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, i, soma = 2, quantidade = 0;
    for (i=3; i<=1000000; i+=2){
        quantidade = 0;    
        for (a=1; a<=i; a++){
            if(i%a==0){
                quantidade++;
            }
            if(quantidade>2){
                break;
            }

        }
        if(quantidade==2){
            soma = soma+i;
        }
    }
    printf("%d",soma); 
    return 0;
}