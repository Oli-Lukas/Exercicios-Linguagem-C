/**
 * 32. Leia um número inteiro e imprima a soma do sucessor de seu
 *     triplo com o antecessor de seu dobro.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, triplo, dobro, soma = 0;

    printf("Entre com um numero: "); scanf("%d", &numero);
    triplo = numero * 3;
    dobro = numero * 2;
    soma = (triplo + 1) + (dobro - 1);
    printf("resultado = %d.\n", soma);
    
    return EXIT_SUCCESS;
}