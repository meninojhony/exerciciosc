#include <stdio.h>
#include <stdlib.h>

//criar um algoritmo que leia 3 némros inteiros de uma só vez e
//coloque o resultados da multiplicação entre os 3 em uma variavel propria,
//depois exiba essa variável.

void main()
{
int num1, num2, num3, resultado;

printf("Digite tres numeros separados por espaço\n");
//podemos colocar %d para todos os numero e depois alocar eles devidamente.
scanf("%d %d %d", &num1, &num2, &num3);

resultado = num1 * num2 * num3;
printf("O resultado e:%d ", resultado);
}
