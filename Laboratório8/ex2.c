#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pi,i = 10;
    float *pr, r = 12.5;
    char *pc, c = 'i';

    pi = &i;
    pr = &r;
    pc = &c;
    printf("%d\n%f\n%c\n",*pi,*pr,*pc);
    *pi = 25;
    *pr = 28.5;
    *pc = 'j';
    printf("%d\n %f\n%c\n",*pi,*pr,*pc);
}