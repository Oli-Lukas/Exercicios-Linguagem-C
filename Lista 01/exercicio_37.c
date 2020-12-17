/**
 * 37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o
 *     desconto foi de 12%.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, valorFinal;

    printf("Informe o valor do produto: "); scanf("%f", &valor);
    valorFinal = (valor * 0.88);
    printf("Valor com desconto: R$ %.2f.\n", valorFinal);
    
    return EXIT_SUCCESS;
}