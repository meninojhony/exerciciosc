#include <stdio.h>

/* Escreva um programa que peça um inteiro ao usuário,
e com esse inteiro, ele imprima, linha-a-linha, a tabuada
daquele número até o 10. Por exemplo, se ele escolher o número 2,
o programa imprimirá: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20.*/

int main(){
    
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    int i;
    for(i = 1; i < 11; i++){
        printf("%d x %d= %d \n", x , i, x * i);
    }
}
