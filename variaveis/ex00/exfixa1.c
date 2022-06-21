#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    //Criar notas como FLOAT, pois as medias podem estar com a numeros NÃO INTEIROS
    float nota1, nota2, resultado;

    //lendo primeiro valor
    printf("Digite a primeira nota: ");
    //scanf le os valores e depois vc aloca em algum endereço.
    scanf("%f", &nota1)

    //Perguntando o segundo valor + lendo o mesmo para alocar em algum endereço.
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    //calculando e mostrando o resultado final.
    resultado = ((nota1 + nota2) / 2);
    printf("A média é: %f", resultado);
    return(0);
    
}