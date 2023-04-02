#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i=0;
    float hc=1.50,hz=1.10;

    while(hz<hc){
        if(hz<hc){
            hc = hc+0.02;
            hz = hz+0.03;
            i++;
        }else{
            break;
        }
    }
    printf("Levara %d anos para que Ze fique maior que Chico",i);

    return 0;
}