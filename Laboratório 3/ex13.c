#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,x=1000,soma=0;

    for(i=1;i<x;i++){
        if(((i%3)==0)&&((i%5)==0)){
            soma += i;
        }
    }
    printf("%d", soma);

    return 0;
}