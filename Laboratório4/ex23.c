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
    int i,j,h,f,met;
    for (i = 0; i <= a; i++){
        for (j = 1; j <= i ; j++){
            printf("*");
        } 
        printf("\n");
    }
    for(h = a-1; h >= 0; h--){
        for(f = 0; f<h; f++){
            printf("*");
        }
        printf("\n");
    }    
}