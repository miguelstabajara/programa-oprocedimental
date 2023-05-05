#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[50];
    int i,tamanho = 0,x=0;
    printf("Digite uma frase para saber se eh palindromo\n");
    gets(str);

    for(i=0;i<=(strlen(str)-1);i++){
        tamanho = tamanho-1;
        if((str[i])!=(str[((strlen(str))+tamanho)])){
            printf("Nao eh um palindromo");
            x = 1;
            break;
        }
    }

    if(x!=1){
        printf("Eh um palindromo");
    }
}