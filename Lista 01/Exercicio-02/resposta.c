/**
 * 2. Faça um programa que leia um número real e o imprima.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;

    printf("Informe um numero real: "); scanf("%f", &numero);
    printf("O numero digitado foi %.2f.\n", numero);
    
    return EXIT_SUCCESS;
}