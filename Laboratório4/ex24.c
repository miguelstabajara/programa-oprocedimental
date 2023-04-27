#include <stdio.h>
#include <stdlib.h>

int piramide(int a);
int main(){
    int n;
    printf("Digite o numero de linhas");
    scanf("%d",&n);
    piramide(n);
}
int piramide(int a){
    int base,esp,i,j,h;
    base = 2*a-1;
    esp = (base-1)/2;
    for (i = 0; i < a; i++){
        for (j = esp-i; j > 0; j--){
            printf(" ");
        }
        for (h = 0; h < (i*2)+1; h++){
            printf("*");
        }  
        printf("\n");
    }
}