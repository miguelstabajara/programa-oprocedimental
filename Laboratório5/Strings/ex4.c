#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str[20],c;
    int i,soma=0;
    printf("Digite uma palavra\n");
    gets(str);
    printf("Digite um caractere para substituir as vogais dessa palavra\n");
    scanf(" %c",&c);
    
    for(i=strlen(str); i>=0 ; i--){
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')){
            str[i] = c;
            soma = soma+1;
        }
    }
    printf("A palavra tem %d vogais.\nSubstituindo as vogais por '%c' temos:%s",soma,c,str);
}