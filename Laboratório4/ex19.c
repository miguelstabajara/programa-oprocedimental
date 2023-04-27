#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int fatorial(int x);
int main(){
   int x,fat;
   printf("Insira o valor do fatorial");
   scanf("%d",&x);
   fat = fatorial(x);
   printf("A exponenciacao equivale a %d", fat);
}
int fatorial(int x){
    int i, fat=1;
    for (i=1; i <= x; i++)
    {
        fat = fat*i;
    }
    return fat;
}