#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,x;
    char *s;

    printf("Digite o tamanho da string: ");
    scanf("%d",&x);

    s = (char *) malloc(x*sizeof(char));
    setbuf(stdin,NULL);
    fgets(s,x,stdin);

    s[strcspn(s,"\r\n")] = 0;

    for(i=0;i<x;i++){
        if(!((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))){
            printf("%c",s[i]);
        }
    }
    free(s);
    return 0;
}