#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b,c;

    printf("Digite tres numeros para colocalos em ordem crescente");
    scanf("%f %f %f",&a,&b,&c);
    
    if(((a>=b)&&(a>=c))&&(b>=c)){
        printf("%f %f %f",a,b,c);
    }else if(((b>=a)&&(b>=c))&&(a>=c)){
        printf("%f %f %f",b,a,c);
    }else if(((c>=a)&&(c>=b))&&(b>=a)){
        printf("%f %f %f",c,b,a);
    }else if(((c>=a)&&(c>=b))&&(a>=b)){
        printf("%f %f %f",c,a,b);
    }else if(((b>=a)&&(b>=c))&&(c>=a)){
        printf("%f %f %f",b,c,a);
    }else if(((a>=b)&&(a>=c))&&(c>=b)){
        printf("%f %f %f",a,c,b);
    }
    return 0;
}