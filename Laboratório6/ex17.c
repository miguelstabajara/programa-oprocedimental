#include <stdio.h>

typedef struct 
{
    char nome[15];
    float potencia, horas_por_dia;
}eletro;

int main ()
{
    int dias, i;
    float consumo_total = 0;
    eletro casa[5];

    for (i = 0; i < 5; i++)
    {
        printf ("Digite o nome do eletro: ");
        setbuf (stdin, NULL);
        fgets (casa[i].nome, 15, stdin);

        printf ("Digite a potencia (kw) e o tempo de uso diario (h): ");
        scanf ("%f%f", &casa[i].potencia, &casa[i].horas_por_dia);    
    }

    printf ("Digite a quantidade de dias; ");
    scanf ("%d", &dias);

    for (i = 0; i < 5; i++)
    {
        consumo_total += (casa[i].potencia*casa[i].horas_por_dia)*dias;
    }

    printf ("O consumo total por esse periodo eh de %.2fkw", consumo_total);

    for (i = 0; i < 5; i++)
    {
        printf ("\nO consumo de %s foi de %.2fkw nesse periodo e isso representa %.1f%%", casa[i].nome, (casa[i].potencia*casa[i].horas_por_dia)*dias, ((((casa[i].potencia*casa[i].horas_por_dia)*dias)*100)/consumo_total));
    }

    return 0;
}