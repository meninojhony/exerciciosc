#include <stdio.h>
#include <stdlib.h>

//criar uma tabuada usando repetição de for

void main()
{
    int i;

    //tabuada de 2
    for(i = 1; i <= 10; i++)
    {
        printf("\n 2 X %d = %d", i, 2 * i);
    }

    //contando de 2 em 2
    for(i = 0; i <= 10; i = i + 2);
    {
        printf("\n%d", i);
    }


}