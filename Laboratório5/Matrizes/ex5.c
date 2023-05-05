#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[10][10],i,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            if(i<j){
                mat[i-1][j-1] = (2*i)+(7*j)-2;
            }
            if(i==j){
                mat[i-1][j-1] = ((3*(i*i))-1);
            }
            if(i>j){
                mat[i-1][j-1] = ((4*(i*i*i))-(5*(j*j))+1);
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(j==9){
                printf("%d\n",mat[i][j]);
            }else{
                printf("%d        ",mat[i][j]);
            }
        }
    }
}