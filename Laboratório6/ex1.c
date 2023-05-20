#include <stdio.h>

struct horario
{
    int hor;
    int min;
    int seg;
};
typedef struct horario Horario;

int main ()
{
    Horario x;

    printf ("Digite as horas, minutos e segundos: ");
    scanf ("%d%d%d", &x.hor, &x.min, &x.seg);

    printf ("O horario digitado foi: %d:%d:%d", x.hor, x.min, x.seg);

    return 0;
}