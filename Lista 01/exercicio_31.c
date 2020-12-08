/**
 * 31. Leia um número inteiro e imprima o seu antecessor e o seu
 *     sucessor.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Entre com um numero inteiro: "); scanf("%d", &numero);
    printf("Numero = %d.\nAntecessor = %d.\nSucessor = %d.\n", numero, numero - 1, numero + 1);
    
    return EXIT_SUCCESS;
}