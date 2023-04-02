#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,i;

    for(i=1; i<=5; ++i){
        x = i*3;
        printf("%d eh multiplo de 3\n", x);
    }

    return 0;
}