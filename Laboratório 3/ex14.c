#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n,d1,d2;
    printf("Digite a quantidade de vezes que quer rolar os dados");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        d1 = rand()%6+1;
        d2 = rand()%6+1;
        if(d1>d2) printf("O dado 1(%d) eh maior que o dado 2(%d)\n",d1,d2);
        else if (d2>d1) printf("O dado 2(%d) eh maior que o dado 1(%d)\n",d2,d1);
        else if (d2==d1) printf("O resultado dos dados sao iguais(%d)\n",d2);
    }

    return 0;
}