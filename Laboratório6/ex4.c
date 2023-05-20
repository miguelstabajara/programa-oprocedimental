#include <stdio.h>

struct alunos 
{
    char nome[50];
    char matr[20];
    int notas[3];

};
typedef struct alunos alunos;

int main ()
{
    alunos medias[5];
    int i, j, maior1, meng, maig, teste;

    for (i = 0; i < 5; i++)
    {
        printf ("Digite o nome do aluno: ");
        setbuf (stdin, NULL);
        fgets (medias[i].nome, 50, stdin);

        printf ("Digite a matricula do aluno: ");
        setbuf (stdin, NULL);
        fgets (medias[i].matr, 20, stdin);

        for (j = 0; j < 3; j++)
        {
            printf ("Digite as tres notas do aluno: ");
            scanf ("%d", &medias[i].notas[j]);
        }
    }

    j = 0;

    for (i = 0; i < 5; i++)
    {
        if (medias[i].notas[0] > j)
        {
            j = medias[i].notas[0];
            maior1 = i;
        }
    }

    j = 0;

    for (i = 0; i < 5; i++)
    {
        teste = (medias[i].notas[0] + medias[i].notas[1] + medias[i].notas[2])/3;
        if (teste > j)
        {
            j = teste;
            maig = i;
        }
    }

    j = 50;

    for (i = 0; i < 5; i++)
    {
        teste = (medias[i].notas[0] + medias[i].notas[1] + medias[i].notas[2])/3;
        if (teste < j)
        {
            j = teste;
            meng = i;
        }
    }

    printf ("\nO aluno com a melhor nota da primeira prova foi %s.", medias[maior1].nome);
    printf ("\nO aluno com a maior media foi %s.", medias[maig].nome);
    printf ("\nO aluno com a menor media foi %s.", medias[meng].nome);

    teste = 0;

    for (i = 0; i < 5; i++)
    {
        teste = ((medias[i].notas[0] + medias[i].notas[1] + medias[i].notas[2])/3);
        if (teste >= 6.0)
        {
            printf ("\nO aluno %s foi aprovado com media %d.", medias[i].nome, teste);
        }
        else
        {
            printf ("\nO aluno %s nao foi aprovado. Sua media eh %d.", medias[i].nome, teste);
        }
    }

    return 0;
}