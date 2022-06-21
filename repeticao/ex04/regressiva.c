#include <stdio.h>
#include <stdlib.h>

/*crie um algoritmo que imprima numeros de 10 ate 0
de forma regressiva. (usando while, do e for)*/

void main()
{
    int i;

    i = 10;
    while(i >= 0)
    {
        printf("\n%d", i);
        i--;
    }

    for(i = 10; i >= 0; i--)
    {
        printf("\n%d", i);
    }

    i = 10;
    do
    {
        printf("\n%d", i);
        i--;
    } while (i >= 0);
    
}