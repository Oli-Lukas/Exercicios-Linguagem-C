/**
 * 31. Leia um número inteiro e imprima o seu antecessor e o seu
 *     sucessor.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, antecessor, sucessor;

    printf("Entre com um numero inteiro: "); scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor   = numero + 1;

    printf("Numero     = %d\n", numero);
    printf("Antecessor = %d\n", antecessor);
    printf("Sucessor   = %d\n", sucessor);

    return EXIT_SUCCESS;
}