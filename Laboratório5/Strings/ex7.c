#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i,x,y=0;
    printf("Digite uma frase para retirar os espacos\n");
    gets(str);
    x = strlen(str);
    for(i=0; i<x; i++){
        if(str[i]==' ') continue;
        str[y] = str[i];
        y++;
    }
    str[y]='\0';
    printf("A palavra em letra maiuscula equivale a %s",str);
}