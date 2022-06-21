#include <stdio.h>
#include <stdlib.h>

//imprima numeros pares de 1 a 10

void main()
{

int i;

i = 1;
    while(i <= 10)
    {
        if(i % 2 == 0)
        printf("\n%d e Par!", i);
        

        else
        {
            printf("\n%d e Impar!", i);
        }
        i++;
    }
}