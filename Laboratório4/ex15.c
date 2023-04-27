#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int formtriang(float x, float y, float z);
void checartriang(float x, float y, float z);
int main(){
   float x,y,z,t;
   printf("Digite os lados para descobrir o tipo do triângulo");
   scanf("%f %f %f",&x, &y, &z);
   t = formtriang(x,y,z);
   if(t==1){
        checartriang(x,y,z);
   }else{
        printf("Nao eh um triangulo");
   }
}
int formtriang(float x,float y, float z){
    float xy,xz,zy;
    xy = x+y;
    xz = x+z;
    zy = z+y;
    if((x<zy)&&(z<xy)&&(y<xz)) return 1;
    else return 0;
}

void checartriang(float x, float y, float z){
    if((x==y)&&(x==z)) printf("Triangulo equilatero");
    else if ((x!=y)&&(x!=z)&&(z!=y)) printf("Triangulo escaleno");
    else if((x==y)||(x==z)||(z==y)) printf("Triangulo isosceles");
}