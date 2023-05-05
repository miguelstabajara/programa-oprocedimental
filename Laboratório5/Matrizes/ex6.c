#include <stdio.h>
#include <stdlib.h>


int main(){
    int mat[4][4],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o valor da posicao da matriz [%d][%d]\n",i+1,j+1);
            scanf("%d",&mat[i][j]);
            if(((mat[i][j])<=20)&&((mat[i][j])>=1)){
            }else{
                mat[i][j]=0;
                printf("Deve estar no intervalo de 1 a 20, digite novamente");
                scanf("%d",&mat[i][j]);
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
    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(((i==0)&&((j==1)||(j==2)||(j==3)))||((i==1)&&((j==2)||(j==3)))||((i==2)&&(j==3))){
                mat[i][j]=0;
            }
            if(j==3){
                printf("%d\n",mat[i][j]);
            }else{
                printf("%d ",mat[i][j]);
            }
        }
    }
}