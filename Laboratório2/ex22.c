#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,s;
    printf("Digite sua idade e seu tempo de serviço para saber se pode se aposentar");
    scanf("%d %d", &a, &s);

    if (((a>=60)&&(s>=25))||(a>=65)||(s>=30)) printf("Voce pode se aposentar");
    else printf("Voce nao pode se aposentar");
    
    return 0;
}