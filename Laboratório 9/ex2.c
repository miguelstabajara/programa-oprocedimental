#include <stdio.h> 
#include <stdlib.h>

int main(){
  int *vetor, tamanho, i;

  printf("Digite o tamanho do vetor aqui:\n");
  scanf("%d", &tamanho);

  vetor = (int *)malloc(sizeof(int) * tamanho);

  for (i = 0; i < tamanho; i++){

    printf("Digite um valor para a posicao [%d] aqui:\n", i);
    scanf("%d", &vetor[i]);
  }
  for (i = 0; i < tamanho; i++){
    printf("%d |", vetor[i]);
  }

  free(vetor);
    
  return 0;
}
