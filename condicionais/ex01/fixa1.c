#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//crie um algoritmo que leia 3 valores e informe se eles são
//iguais entre si para formarem os lados de um triângulo equilátero.

void main()
{
    float lado1, lado2, lado3;

    printf("\nInsira o valor do primeiro lado: ");
    scanf("%f", &lado1);

    printf("\nInsira o valor do segundo lado: ");
    scanf("%f", &lado2);

    printf("\nInsira o valor do terceiro lado: ");
    scanf("%f", &lado3);

    if ((lado1 == lado2) && (lado2 == lado3))
    printf("Os lados são iguais");
    else
    printf("Os lados são diferentes");
    
}