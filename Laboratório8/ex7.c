#include <stdio.h>
#include <stdlib.h>

int main(){
    int *pa,*pb,*pc,a,b,c;
    printf("Digite tres valores inteiros\n");
    scanf("%d %d %d",&a,&b,&c);
    pa = &a;
    pb = &b;
    pc = &c;
    if((*pa>*pb)&&(*pb>*pc)){
        printf("%d %d %d\n",*pa,*pb,*pc);
    }else if((*pa>*pc)&&(*pc>*pb)){
        printf("%d %d %d\n",*pa,*pc,*pb);
    }else if((*pb>*pa)&&(*pa>*pc)){
        printf("%d %d %d\n",*pb,*pa,*pc);
    }else if((*pb>*pc)&&(*pc>*pa)){
        printf("%d %d %d\n",*pb,*pc,*pa);
    }else if((*pc>*pa)&&(*pa>*pb)){
        printf("%d %d %d\n",*pc,*pa,*pb);
    }else if((*pc>*pb)&&(*pb>*pa)){
        printf("%d %d %d\n",*pc,*pb,*pa);
    }
    printf("Endereco de a:%p\nEndereco de b:%p\nEndereco de c:%p\n",pa,pb,pc);
}