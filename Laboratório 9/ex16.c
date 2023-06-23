#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int **p, **p2;
    int i, j, n, m;

    printf ("Digite a quantidade de linhas: ");
    scanf ("%d", &n);
    printf ("\nDigite o numero de coluna: ");
    scanf ("%d", &m);

    p = (int**) malloc(n*sizeof(int*));
    p2 = (int**) malloc(m*sizeof(int*));
    
    printf ("\nDigite os numeros da matriz: ");
    
    for (i = 0; i < n; i++){
        p[i] = (int*) malloc(m*sizeof(int));
        for (j= 0; j < m; j++){
            scanf ("%d", &p[i][j]);
        }    
    }
    printf ("\n");
    for(i=0;i<m;i++){
        p2[i] = (int*) malloc(n*sizeof(int));
        for (j= 0; j < n; j++){
            p2[i][j] = p[j][i];
        }    
    }

    for (i = 0; i < n; i++){
        for (j= 0; j < m; j++){
            printf (" %d ", p[i][j]);
        }
        printf ("\n");
    }
    printf ("\n");
    for(i=0;i<m;i++){
        for(j= 0; j < n; j++){
            printf (" %d ", p2[i][j]);
        }
        printf ("\n");
    }
    for (i=0;i<n;i++){
        free(p[i]); 
    }
    free(p);
    for (i=0;i<m; i++){
        free(p2[i]); 
    }
    free(p2);
    return 0;
}