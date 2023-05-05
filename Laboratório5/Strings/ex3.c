#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    char str1[20];
    int i,x=0;
    printf("Digite uma palavra para digitar ao contrario\n");
    gets(str);
    
    for(i=strlen(str)-1; i>=0 ; i--){
        str1[x]=str[i];
        x = 1+x;
    }
    str1[x]='\0';
    printf("%s",str1);
}