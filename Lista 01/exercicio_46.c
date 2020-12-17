/**
 * 46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere outro número
 *     formado pelos dígitos invertidos do número lido. Exemplo:
 *
 *     NúmeroLido = 123
 *     NúmeroGerado = 321
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1, c2, c3;

    printf("Digite um numero de tres digitos: "); scanf("%c%c%c", &c1, &c2, &c3);
    printf("NumeroLido: %c%c%c.\n", c1,c2,c3);
    printf("NumeroGerado: %c%c%c.\n", c3,c2,c1);
    
    return EXIT_SUCCESS;
}