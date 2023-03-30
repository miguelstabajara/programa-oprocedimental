#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int A,B,C,x,y,z;

    printf("Insira tres valores equivalentes a A, B e C para descobrir se equivalem aos lados de um triangulo e descobrir o tipo do triangulo\n");
    scanf("%d %d %d", &A, &B, &C);
    x = A+B;
    y = B+C;
    z = C+A;
    
    if (A<y&&B<z&&C<x){
        printf("Os valores dos lados equivalem a um valor valido para ser um triangulo");
        if ((A==B)&&(A==C)&&(B==C)) printf("Eh um triangulo equilatero");
        else if ((A!=B)&&(B==C)||(A==B)&&(A!=C)||(A==C)&&(B!=C)) printf("Eh um triangulo isosceles");
        else if ((A!=B)&&(A!=C)&&(B!=C)) printf("Eh um triangulo escaleno");
    }
    return 0;
}