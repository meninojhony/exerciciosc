#include <stdio.h>
#include <stdlib.h>

/* crie um algoritmo que leia 3 valores para um vetor de 3 posições
e depois calcule a media dos balores acessando o vetor*/

void main()
{

float nota[3], media;
int i;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota[0]);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota[1]);

    printf("Digite sua terceira nota: ");
    scanf("%f", &nota[2]);
    
    media = ((nota[0] + nota[1] + nota[2]) / 3);

    printf("Sua media:%f", media);

}
