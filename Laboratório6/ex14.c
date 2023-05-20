#include <stdio.h>

typedef struct 
{
    char marca[15];
    int ano;
    float price;
}carros;

int main ()
{
    int i;
    float p = 1;
    carros cars[5];

    for (i = 0; i < 5; i++)
    {
        printf ("digite a marca: ");
        setbuf (stdin, NULL);
        fgets (cars[i].marca, 15, stdin);

        printf ("Digite o ano do carro: ");
        scanf ("%d", &cars[i].ano);

        printf ("Digite o valor do carro: ");
        scanf ("%f", &cars[i].price);
    }

    do
    {

        printf ("Digite o limite de preco para filtro: ");
        scanf ("%f", &p);

        for (i = 0; i < 5; i++)
        {
            if (p >= cars[i].price)
            {
                fputs (cars[i].marca, stdout);
                printf ("ano %d, valor %.2f\n", cars[i].ano, cars[i].price);
            }
        }

    } while (p != 0);

    printf ("Obrigado");

    return 0;
}