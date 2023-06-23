#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor, tamanho, op, posicao, i;

    printf("\nO tamanho da memoria a ser alocada eh:\n1 valor do tipo INT guarda 4 BYTES\n");
    printf("Dito isso, digite quantos bytes de memoria sao necessarios para alocar o tamanho do vetor desejado aqui\nEx.: vet[2] - 8 BYTES\n\nBYTES: ");
    scanf("%d", &tamanho);

    if (tamanho % 4 == 0)
    {
        vetor = (int *)malloc(tamanho);
        for (i = 0; i < (tamanho / 4); i++)
        {
            printf(" %d |", vetor[i]);
        }
    }
    else
    {
        printf("Tamanho invalido1");
    }

    for (i = 0; i < (tamanho / 4); i++)
    {
        vetor[i] = 0;
    }

    do
    {
        printf("\nMenu\n1.Inserir valor em determinada posicao\n2.Checar valor guardado em determinada posicao\n3.Sair\nOpcao: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\nDigite qual posicao de vetor que pretende acessar(vetor iniciando na posicao vet[0]): ");
            scanf("%d", &posicao);

            if (posicao > (tamanho / 4) && posicao < 0)
            {
                printf("Valor invalido!");
            }
            else
            {
                for (i = 0; i < (tamanho / 4); i++)
                {
                    if (i == posicao)
                    {
                        printf("Digite o valor da posicao [%d] aqui: ", i);
                        scanf("%d", &vetor[i]);
                    }
                }
            }

            break;
        case 2:
            printf("Digite qual posicao de vetor que pretende acessar(vetor iniciando na posicao vet[0]): ");
            scanf("%d", &posicao);

            if (posicao > (tamanho / 4) && posicao < 0)
            {
                printf("Valor invalido!\n");
            }
            else
            {
                for (i = 0; i < (tamanho / 4); i++)
                {
                    if (i == posicao)
                    {
                        printf("Posicao [%d] = %d\n", i, vetor[i]);
                    }
                }
            }

            break;
        case 3:
            printf("FIM! :)\n");
            return 0;
        }
    } while (op != 3);

    free(vetor);
    
    return 0;
}