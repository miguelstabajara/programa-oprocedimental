#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main (){
    srand (time (NULL));
    double *vet;
    int x, i;

    printf ("Digite o espaco que devera ser alocado: ");
    scanf ("%d", &x);

    if (x < 10){
        vet = (double*) malloc (10*sizeof(double));
    }else{
        vet = (double*) malloc (x*sizeof(double));
    }

    for (i = 0; i < 10; i++){
        Sleep (50);
        vet[i] = rand() % 100;
        printf (" %.2lf ", vet[i]);
    }
    return 0;
}