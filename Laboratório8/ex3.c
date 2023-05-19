#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pi, *pj, j, i;

    pi = &i;
    pj = &j;
    if(pi>pj){
        printf("O endereco %p eh maior",pi);
    }else{
        printf("O endereco %p eh maior",pj);
    }
        
    
}