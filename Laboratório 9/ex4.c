#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *tamanho_string(char *str1, int tam);

int main(){
    int i, tamanho;
    char *string = NULL;

    printf("Digite o tamanho da string aqui: ");
    scanf("%d", &tamanho);
    fflush(stdin);

    tamanho++;

    string = tamanho_string(string, tamanho);

    printf("Digite a string aqui:\n");
    fgets(string, tamanho, stdin);

    for (i = 0; i < tamanho; i++)
    {
        if (string[i] != 'a' && string[i] != 'A' && string[i] != 'e' && string[i] != 'E' && string[i] != 'i' && string[i] != 'I' && string[i] != 'o' && string[i] != 'O' && string[i] != 'u' && string[i] != 'U')
            
        {
            printf("%c", string[i]);
        }
    }

    free(string);

    return 0;
}

char *tamanho_string(char *string1, int tamanho)
{
    return string1 = (char *)malloc(sizeof(char) * tamanho);
}