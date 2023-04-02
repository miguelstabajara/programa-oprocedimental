#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,x,y,z;
    printf("Insira a quantidade de linhas");
    scanf("%d",&x);
    for(i=1; i<=x; i++){
        for(y=1;y<=i;y++){
            z++;
            printf("%d ",z);
        }
        printf("\n");
        
    }
    
    
    return 0;
}