#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float h, valor, hi, mi, hf, mf;

    printf ("Digite o horario de entrada (hh e depois mm): ");
    scanf ("%f%f", &hi, &mi);

    printf ("Digite o horario de saida (hh e depois mm): ");
    scanf ("%f%f", &hf, &mf);

    if (hi > hf)
    {
        h = (((hi+hf)*60)+mi+mf)/60;
        if (h <= 1)
        {
            printf ("Voce deve pagar: R$1.00");
        }
        else
        {
            if (h > 1 && h <= 2)
            {
                printf ("Voce deve pagar: R$2.00");
            }
            else
            {
                if (h > 2 && h <= 3)
                {
                    printf ("Voce deve pagar: R$3.40");
                }
                else
                {
                    if (h > 3 && h <= 4)
                    {
                        printf ("Voce deve pagar: R$4.80");
                    }
                    else
                    {
                        if (h > 4)
                        {
                            valor = h-4;
                            
                            if (valor < 1)
                            {
                                ++valor;
                                valor = (((int)(valor/1))*2);
                                printf ("Voce deve pagar: R$%f", valor+4.80);
                            }
                            else
                            {
                                valor = (((int)(valor/1))*2);
                                printf ("Voce deve pagar: R$%f", valor+4.80);
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        if (hi < hf)
        {
            h = (((hf-hi)*60)+mi+mf)/60;
            if (h <= 1)
            {
                printf ("Voce deve pagar: R$1.00");
            }
            else
            {
                if (h > 1 && h <= 2)
                {
                    printf ("Voce deve pagar: R$2.00");
                }
                else
                {
                    if (h > 2 && h <= 3)
                    {
                        printf ("Voce deve pagar: R$3.40");
                    }
                    else
                    {
                        if (h > 3 && h <= 4)
                        {
                            printf ("Voce deve pagar: R$4.80");
                        }
                        else
                        {
                            if (h > 4)
                            {
                                valor = h-4;
                            
                                if (valor < 1)
                                {
                                    ++valor;
                                    valor = (((int)(valor/1))*2);
                                    printf ("Voce deve pagar: R$%f", valor+4.80);
                                }
                                else
                                {
                                    valor = (((int)(valor/1))*2);
                                    printf ("Voce deve pagar: R$%f", valor+4.80);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}