#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,n;
    float x,n1,n2;

    for(i=1;;i++){
        printf("Escolha a operacao a ser realizada:\n-Adicao (opcao 1)\n-Subtracao (opcao 2)\n-Multiplicacao (opcao 3)\n-Divisao (opcao 4).\n-Saida (opcao 5)\n");
        scanf("%d",&n);

        switch (n){
        case 1:
            printf("Digite dois numeros para realizar a operacao\n");
            scanf("%f %f",&n1,&n2);
            x = n1+n2;
            printf("A soma equivale a %f\n",x);
            break;
        case 2:
            if(n1>n2){
                printf("Digite dois numeros para realizar a operacao\n");
                scanf("%f %f",&n1,&n2);
                x = n1-n2;
                printf("A subtracao equivale a %f\n",x);
                break;
            }else{
                printf("Digite dois numeros para realizar a operacao\n");
                scanf("%f %f",&n1,&n2);
                x = n2-n1;
                printf("A subtracao equivale a %f\n",x);
                break;
            }
        case 3:
            printf("Digite dois numeros para realizar a operacao\n");
            scanf("%f %f",&n1,&n2);
            x = n1*n2;
            printf("A multiplicacao equivale a %f\n",x);
            break;
        case 4:
            if(n2==0)
            {
                printf("Denominador invalido\n");
                break;
            }else{
                printf("Digite dois numeros para realizar a operacao\n");
                scanf("%f %f",&n1,&n2);
                x = n1/n2;
                printf("A divisao equivale a %f\n",x);
                break;
            }
        case 5:
            goto fim;
        }
        fim:
        break;
    }

    return 0;
}