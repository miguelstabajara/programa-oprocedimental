#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    i=0;
    do{
        i = i+1000;
        printf("%d\n", i);
    }while(i<100000);
    return 0;
}