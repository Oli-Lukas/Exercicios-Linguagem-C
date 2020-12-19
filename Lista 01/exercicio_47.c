/**
 * 47. Leia um número inteiro de 4 dígitos (de 1000 a 9999)
 *     e imprima 1 dígito por linha.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1, c2, c3, c4;

    printf("Digite um numero inteiro entre 1000 e 9999: "); scanf("%c%c%c%c", &c1, &c2, &c3, &c4);
    printf("Digito 1: %c.\n", c1);
    printf("Digito 2: %c.\n", c2);
    printf("Digito 3: %c.\n", c3);
    printf("Digito 4: %c.\n", c4);
    
    return EXIT_SUCCESS;
}