#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int saque,n100,n50,n20,n10,n5,n2,n1;
    
    printf("Insira a quantidade a ser sacada");
    scanf("%d", &saque);

    n100 = saque/100;
    printf("Serao impressas %d notas de 100\n", n100);
    n50 = (saque%100)/50;
    printf("Serao impressas %d notas de 50\n", n50);
    n20 = ((saque%100)%50)/20;
    printf("Serao impressas %d notas de 20\n", n20);
    n10 = (((saque%100)%50)%20)/10;
    printf("Serao impressas %d notas de 10\n", n10);
    n5 = ((((saque%100)%50)%20)%10)/5;
    printf("Serao impressas %d notas de 5\n", n5);
    n2 = (((((saque%100)%50)%20)%10)%5)/2;
    printf("Serao impressas %d notas de 2\n", n2);
    n1 = ((((((saque%100)%50)%20)%10)%5)%2)/1;
    printf("Serao impressas %d notas de 1\n", n1);


    return 0;
}