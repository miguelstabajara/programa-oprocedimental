#include <stdio.h>
#include <string.h>

typedef struct 
{
    char or[5], dest[5];
}flight;

typedef struct 
{
    char nome[15], cod[5];
    int saida, chegada;
}aeroporto;

int main ()
{
    int i, j;
    flight voos[5];
    aeroporto aeroportos[5];

    for (i = 0; i < 5; i++)
    {
        aeroportos[i].chegada = 0;
        aeroportos[i].saida = 0;
    }

    for (i = 0; i < 5; i++)
    {
        printf ("Digite o nome e o codigo dos aeroportos: ");
        setbuf (stdin, NULL);
        fgets (aeroportos[i].nome, 15, stdin);
        setbuf (stdin, NULL);
        fgets (aeroportos[i].cod, 5, stdin);
    }

    for (i = 0; i < 5; i++)
    {
        printf ("Digite a origem e o destino do voo: ");
        setbuf (stdin, NULL);
        fgets (voos[i].or, 5, stdin);
        setbuf (stdin, NULL);
        fgets (voos[i].dest, 5, stdin);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (strcmp (voos[j].or, aeroportos[i].cod) == 0)
            {
                aeroportos[i].saida++;
            }
            if (strcmp (voos[j].dest, aeroportos[i].cod) == 0)
            {
                aeroportos[i].chegada++;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        fputs (aeroportos[i].nome, stdout);
        printf ("O aeroporto possui %d saidas e %d chegadas\n", aeroportos[i].saida, aeroportos[i].chegada);
    }

    return 0;
}