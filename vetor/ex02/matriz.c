#include <stdio.h>
#include <stdlib.h>

/* preencha uma matriz 2x2 lendo valores do usuário e
depois troque os valores entre a primeira e a segunda linha. */

void main()
{
   int m[2][2], aux1, aux2, i, j;

   for(i = 0; i < 2; i++)
   {
        for(j = 0; j < 2; j++)
        {
            printf("Digite um valor para [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
        
   }   
    aux1 = m[0][0];
    aux2 = m[0][1];

    m[0][0] = m[1][0];
    m[0][1] = m[1][1];
    
    m[1][0] = aux1;
    m[1][1] = aux2;
    
    printf("\n%d %d", m[0][0], m[0][1]);
    printf("\n%d %d", m[1][0], m[1][1]);

    /*int m[2][2], aux1, aux2;

    printf("Digite os valores da matriz[0][0]: ");
    scanf("%d", &m[0][0]);

    printf("Digite os valores da matriz[0][1]: ");
    scanf("%d", &m[0][1]);

    printf("Digite os valores da matriz[1][0]: ");
    scanf("%d", &m[1][0]);

    printf("Digite os valores da matriz[1][1]: ");
    scanf("%d", &m[1][1]);

    aux1 = m[0][0];
    aux2 = m[0][1];

    m[0][0] = m[1][0];
    m[0][1] = m[1][1];
    
    m[1][0] = aux1;
    m[1][1] = aux2;
    
    printf("\n%d %d", m[0][0], m[0][1]);
    printf("\n%d %d", m[1][0], m[1][1]);*/


}