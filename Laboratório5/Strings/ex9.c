#include <stdlib.h>
#include <stdio.h>
#include <string.h>

float gasto(float x);
int main(){
    char str[5][100];
    int i, posicao;
    float vet[5],gasto1[5], menor;
    for(i=0;i<5;i++){
        printf("Digite a marca do carro %d\n", i+1);
        fgets(str[i],15,stdin);
    }
    for(i=0;i<5;i++){
        printf("Digite o valor do custo de quilometro por litro do carro %d\n",i+1);
        scanf(" %f",&vet[i]);
        gasto1[i] = gasto(vet[i]);
    }
    menor = vet[0];
    posicao = 0;
    for(i=1;i<5;i++){
        if(menor>vet[i]){
            posicao = i;
        }
    }
    printf("O carro mais economico eh o %s\n",str[posicao]);
    for (i=0;i<5;i++){
        printf("O carro %s gasta %f litros para percorrer 1000km\n", str[i],gasto1[i]);
    }
    
}

float gasto(float x){
    return 1000*x;
}
