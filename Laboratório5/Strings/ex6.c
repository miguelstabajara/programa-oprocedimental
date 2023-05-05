#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int i,x;
    printf("Digite uma palavra em letra minuscula para converter para maiuscula\n");
    gets(str);
    x = strlen(str);
    for(i=0; i<x; i++){
        str[i] = str[i]-32;
    }
    printf("A palavra em letra maiuscula equivale a %s",str);
}
