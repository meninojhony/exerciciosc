#include <stdio.h>
#include <stdlib.h>

// Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas.
// Criar duas variaveis Nota 1 e Nota 2. Diminuílas (para ter a diferença) e depois usar a função abs para ter o valor absoluto

void main ()
{

float nota1, nota2;

printf("Digite a primeiro nota:");
scanf("%f", &nota1);

printf("Digite a segunda nota:");
scanf("%f", &nota2);

//"abs" é a funçao que nos da o valor absoluto.
printf("A diferenca e: %d", abs(nota1 - nota2) );
}
