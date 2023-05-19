#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pa, *pb, a=3, b=20, soma;
    pa = &a;
    pb = &b;
    *pa = 2*(*pa);
    *pb = 2*(*pb);
    soma = (*pb)+(*pa);
    printf("A soma equivale a %d",soma);
}
        