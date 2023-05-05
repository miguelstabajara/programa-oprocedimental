#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int mat[5][5],i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            mat[i][j]=rand()%100;
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