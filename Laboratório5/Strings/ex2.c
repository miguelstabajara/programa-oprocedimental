#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int i,soma=0;
    printf("Digite um numero extenso apenas com 0's e 1's para para descobrir a quantidade de 1\n");
    gets(str);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i]=='1'){
            soma += 1;
        }
    }
    printf("A quantidade de 1's equivale a %d",soma);
}