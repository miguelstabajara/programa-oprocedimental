#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str[100],l1,l2;
    int i,x;
    printf("Digite uma frase ou palavra\n");
    gets(str);
    printf("Digite a letra que deseja substituir pela letra que a substituira\n");
    scanf(" %c %c",&l1,&l2);

    x = strlen(str);
    for(i=0; i<x; i++){
        if(str[i]==l1){
            str[i]=l2;
        }
    }
    printf("A palavra em letra maiuscula equivale a %s",str);
}