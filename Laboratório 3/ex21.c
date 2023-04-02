#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b, i,c, quantidade = 0,quantidade2=1;
    printf("Digite o intervalo entre a e b");
    scanf("%d %d",&a,&b);
    for(i=a; i<=b; i++){   
        quantidade=0; 
        for(c=1;c<=i;c++){
            if(i%c==0){
                quantidade++;
            }
            if(quantidade>2){
                break;
            }
        }
        if(quantidade==2){
            quantidade2++;
        }
    }
    printf("%d",quantidade2); 
    return 0;
}