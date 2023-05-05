#include <stdio.h>
#include <stdlib.h>


int main(){
    int mat[5][5],i,j,x,bug=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite o valor da posicao da matriz [%d][%d]\n",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Procure um valor na matriz");
    scanf("%d",&x);
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(x==mat[i][j]){
                printf("O valor esta na posicao mat[%d][%d]\n",i+1,j+1);
            }else{
                bug = bug+1;
            }
        }
    }
    if(bug==25){
        printf("Nao encontrado");
    }

}
