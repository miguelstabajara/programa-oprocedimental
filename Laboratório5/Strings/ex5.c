#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int i,x;
    printf("Digite uma palavra em letra maiuscula para converter para minuscula\n");
    gets(str);
    x = strlen(str);
    for(i=0; i<x; i++){
        str[i] = str[i]+32;
    }
    printf("A palavra em letra minuscula equivale a %s",str);
}
