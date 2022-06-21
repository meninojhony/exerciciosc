#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*CALCULADORA COM MENU
//crie um algoritmo que leia dois valores e depois
//crie um menu (usando switch case) de 4 opções:
//1-somar, 2-subtrair, 3-dividir, 4-multiplicar.
//Depois que o usuario escolher uma opção, mostre o
resultado da operação escolhida com os dois valores lidos.*/

void main()
{   
    //gerei duas variaveis para ja reter nossos futuros valores
    float valor1, valor2;

    printf("Digite dois numeros: ");
    scanf("%f, %f", &valor1, &valor2);

    //criei variavel para saber a opção do usuario
    int opcao;
    
    //criação do menu (interação com o usuario)
    printf("Escolha uma opcao:");
    printf("\n1-Somar");
    printf("\n2-Subtrair");
    printf("\n3-Dividir");
    printf("\n4-Multiplicar\n");
    scanf("%d", &opcao);
        
        /*ele criou um tipo de "menu de opções" pro usuário escolher qual o tipo de operação matemática o programa vai executar, 
        a variável "opcao" serve apenas para guardar a informação que o usuário passa no "scanf" na hora de digitar
        qual a operação matemática ele quer...
        Se o usuário escolhe a opção 1 , o valor 1 vai ser inserido dentro da variável "opcao",
        o switch pega "opcao" e lê o que ta dentro, quando ele ver que a opcao foi 1 
        ele vai direcionar a execução pro "case 1:" e vai fazer apenas aquele pedaço de código...*/

        switch(opcao)
        {
            case 1:
                printf("Resultado da soma: %.2f", valor1 + valor2);
                break;
            case 2:
                printf("Resultado da subtracao: %.2f", valor1 - valor2);
                break;
            case 3:
                printf("Resultado da divisao: %.2f", valor1 / valor2);
                break;
            case 4:
                printf("resultado da multiplicacao: %.2f", valor1 * valor2);
            default:
                printf("Opicao invalida!");
                break;
        }
        
}
