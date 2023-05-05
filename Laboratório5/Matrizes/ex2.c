#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[5][5],i,j,soma=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                mat[i][j]=1;
            }else{
                mat[i][j]=0;
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j==4){
                printf("%d\n",mat[i][j]);
            }else{
                printf("%d ",mat[i][j]);
            }
        }
    }
}
