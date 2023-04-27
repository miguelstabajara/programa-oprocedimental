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
    int i,j;
    for (i = 0; i <= a; i++){
        for (j = 1; j <= i ; j++){
            printf("!");
        } 
        printf("\n");
    }
}