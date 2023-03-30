#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,a;

    printf("Digite o dia, mes e o ano para descobrir se eh valido");
    scanf("%d %d %d", &d,&m,&a);
    
    switch(m){
        case 1:
            if(((d>=1)&&(d<=31))&&(2022<=a)) printf("O dia eh valido");
            else printf("A data nao eh valida");
            break;
        case 2:
            if ((((a%4)==0)||((a%400)==0))&&((a%100)!=0)){
                if((d>=1)&&(d<=29)) printf("O dia eh valido");
                else printf("A data nao eh valida");
            }else{
                if((d>=1)&&(d<=28)){printf("A data eh valida");}
                else {printf("A data nao eh valida");}
            }
            break;
        case 3:
            if(((d>=1)&&(d<=31))&&(2022<=a)) printf("A data eh valida");
            else printf("A data nao eh valida");
            break;
        case 4:
            if(((d>=1)&&(d<=30))&&(2022<=a)) printf("A data eh valida");
            else printf("A data nao eh valida");
            break;
        case 5:
            if(((d>=1)&&(d<=31))&&(2022<=a)) printf("A data eh valida");
            else printf("A data nao eh valida");
            break;
        case 6:
            if(((d>=1)&&(d<=30))&&(2022<=a)) printf("A data eh valida");
            else printf("A data nao eh valida");
            break;
        case 7:
            if(((d>=1)&&(d<=31))&&(2022<=a)) printf("A data eh valida");
            else printf("A data nao eh valida");
            break;
        case 8:
            if(((d>=1)&&(d<=31))&&(2022<=a)) printf("A data eh valida");
            else printf("A data nao eh valida");
            break;
        case 9:
            if(((d>=1)&&(d<=30))&&(2022<=a)) printf("A data eh valida");
            else printf("A data nao eh valida");
            break;
        case 10:
            if(((d>=1)&&(d<=31))&&(2022<=a)) printf("A data eh valida");
            else printf("A data nao eh valida");
            break;
        case 11:
            if(((d>=1)&&(d<=30))&&(2022<=a)) printf("A data eh valida");
            else printf("A data nao eh valida");
            break;
        case 12:
            if(((d>=1)&&(d<=31))&&(2022<=a)) printf("A data eh valida");
            else printf("A data nao eh valida");
            break;
    }

}