#include <stdio.h>
#include <stdlib.h>


int main(){
    int mat[4][4],vet[2],i,j,maior;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o valor da posicao da matriz [%d][%d]\n",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    maior = mat[0][0];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(maior<mat[i][j]){
                vet[0]=i;
                vet[1]=j;
            }
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(j==3){
                printf("%d\n",mat[i][j]);
            }else{
                printf("%d ",mat[i][j]);
            }
        }
    }
    printf("O maior numero esta na posicao mat[%d][%d]",vet[0]+1,vet[1]+1);
}