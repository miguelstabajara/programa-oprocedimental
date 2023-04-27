#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int potencia(int x,int z);
int main(){
   int x,z,exp;
   printf("Digite a base e o expoente para calcular a potencia");
   scanf("%d %d",&x,&z);
   exp = potencia(x,z);
   printf("A exponenciacao equivale a %d", exp);
}
int potencia(int x, int z){
    int i, xz=1;
    for(i=1; i <= z; i++){
        xz = xz*x;
    }
    return xz;
}