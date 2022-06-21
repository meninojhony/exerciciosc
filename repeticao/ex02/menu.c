#include <stdio.h>
#include <stdlib.h>

void main()
{
    int opcao;

    /*bloco de while que garante que o usuario ira colocar um numero entra 1 e 5,
    caso não ele escolha um opção fora das que foi mostrada o menu retornara e pedirá pra que
     o usario escolha uma opção valida*/
    while(opcao < 1 || opcao > 5)
    {
        printf("Escolha uma opcao:");
        printf("\n1 - Itens");
        printf("\n2 - Loja");
        printf("\n3 - Equipamentos");
        printf("\n4 - Encantamentos");
        printf("\n5 - Feiticos\n\n");

        scanf("%d", &opcao);

        //resultado e acordo com a opção escolhida
        switch(opcao)
        {
            case 1:
                printf("\nSeus itens estao quebrados");
                break;
            case 2:
                printf("\nAproveite os descontos da loja!");
                break;
            case 3:
                printf("\nVoce deve concertar seus equipamentos");
                break;
            case 4:
                printf("\nUm novo encantamento pode ser aprendido");
                break;
            case 5:
                printf("\nSeus feiticos estao prontos!");
                break;
            default:
                printf("\nOpcao invalida, tente novamente\n\n");
                break;
        }

    }
}
