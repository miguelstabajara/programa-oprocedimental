#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    int i;
    printf("Digite a frase para codificala\n");
    gets(str);
    for(i=0;i<=(strlen(str)-1);i++){
        if(str[i]!=' '){
            str[i] = str[i]+3;
        }
    }
    printf("%s",str);
}