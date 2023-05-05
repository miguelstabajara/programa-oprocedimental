#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int x,y,i;
    char str[100];
    printf("Digite uma frase");
    gets(str);
    printf("Digite o valor inicial e final\n");
    scanf("%d %d",&x,&y);
    for(i=x-1;i<y;i++){  
        printf("%c",str[i]);
    }
    
}