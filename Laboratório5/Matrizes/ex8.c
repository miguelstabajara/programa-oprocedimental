#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat1[2][2],mat2[2][2],i,y,j,x,mat3[2][2];
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor da posicao da primeira matriz [%d][%d]\n",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor da posicao da segunda matriz [%d][%d]\n",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Digite o numero equivalente a operacao a ser realizada com as matrizes:\n1-Somar as matrizes;\n2-Subtrair as matrizes;\n3-Adicionar uma constante as duas matrizes;\n4-Imprimir as matrizes;\n");
    scanf("%d",&x);
    switch(x){
    case 1:
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
            mat3[i][j] = mat1[i][j]+mat2[i][j];
            }
        }
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                if(j==1){
                    printf("%d\n",mat3[i][j]);
                }else{
                    printf("%d ",mat3[i][j]);
                }
            }
        }
        break;
    
    case 2:
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
            mat3[i][j] = mat1[i][j]-mat2[i][j];
            }
        }
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                if(j==1){
                    printf("%d\n",mat3[i][j]);
                }else{
                    printf("%d ",mat3[i][j]);
                }
            }
        }
        break;
    
    case 3:
        printf("Insira a constante a ser adicionada nas matrizes\n");
        scanf("%d",&y);
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
            mat1[i][j] = mat1[i][j]+y;
            }
        }
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
            mat2[i][j] = mat2[i][j]+y;
            }
        }
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                if(j==1){
                    printf("%d\n",mat1[i][j]);
                }else{
                    printf("%d ",mat1[i][j]);
                }
            }
        }
        printf("\n");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                if(j==1){
                    printf("%d\n",mat2[i][j]);
                }else{
                    printf("%d ",mat2[i][j]);
                }
            }
        }
        break;
    
    case 4:
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                if(j==1){
                    printf("%d\n",mat1[i][j]);
                }else{
                    printf("%d ",mat1[i][j]);
                }
            }
        }
        printf("\n");
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                if(j==1){
                    printf("%d\n",mat2[i][j]);
                }else{
                    printf("%d ",mat2[i][j]);
                }
            }
        }
        break;
    }
}