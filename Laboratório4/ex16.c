#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void linha(int x);
int main(){
   int x;
   printf("Digite o tamanho da linha");
   scanf("%d",&x);
   linha(x);
}
void linha(int x){
    int i;
    for(i = 0; i < x; i++){
        printf("=");
    }  
}

