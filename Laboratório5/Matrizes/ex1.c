#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[4][4],i,j,soma=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o valor da posicao da matriz [%d][%d]\n",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(mat[i][j]>10){
            printf("%d eh maior do que 10\n",mat[i][j]);
            soma = soma+1;
            }
        }
    }
    printf("A matriz possui %d numeros maiores do que 10\n",soma);

}