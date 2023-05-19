#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pa, *pb, a, b, soma,sub,div,mult;
    printf("Digite dois valores inteiros\n");
    scanf("%d %d",&a,&b);
    pa = &a;
    pb = &b;
    soma = (*pa)+(*pb);
    sub = (*pa)-(*pb);
    if(*pb!=0){
        div = (*pa)/(*pb);
        printf("O valor da divisao equivale a %d\n",div);
    }else{
        printf("Nao existe divisao por zero\n");
    }
    mult = (*pa)*(*pb);
    printf("O valor da soma equivale a %d\nO valor da subtracao equivale a %d\nO valor da multiplicacao equivale a %d",soma,sub,mult);
}