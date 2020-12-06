/**
 * 1. Faça um programa que leia um número inteiro e o imprima.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Informe um numero inteiro: "); scanf("%d", &numero);
    printf("O numero digitado foi %d.\n", numero);
    
    return EXIT_SUCCESS;
}