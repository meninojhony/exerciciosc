#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//crie um algoritmo que leia 3 notas e calcule a media entre elas.
//se o valor for maior que 7 informe que o aluno foi aprovado
//senão foi reprovado.

void main()
{
    //definindo minhas variaveis (tipo float pq as notas podem ser quebradas)
    float nota1, nota2, nota3, resultado;

    //pegando os dados dos usuários e alocando os resultados nas variaveis.
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    resultado = ((nota1 + nota2 + nota3) / 3);

    if(resultado > 7)
    printf("Aprovado");
    else
    printf("Reprovado");

}