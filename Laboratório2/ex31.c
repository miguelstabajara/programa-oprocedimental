#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float h,p;

    printf("Digite sua altura e peso para verificar sua classificacao");
    scanf("%f %f",&h,&p);
    
    if(h<1.20){
        if(p<60) printf("Sua classificacao eh A");
        else if((p>=60)&&(p<=90)) printf("Sua classificacao eh D");
        else if(p>90) printf("Sua classificacao eh G");
    }
    else if((h>=1.20)&&(h<=1.70)){
        if(p<60) printf("Sua classificacao eh B");
        else if((p>=60)&&(p<=90)) printf("Sua classificacao eh E");
        else if(p>90) printf("Sua classificacao eh H");
    }
    else if(h>1.70){
        if(p<60) printf("Sua classificacao eh C");
        else if((p>=60)&&(p<=90)) printf("Sua classificacao eh F");
        else if(p>90) printf("Sua classificacao eh I");
    }
    return 0;
}