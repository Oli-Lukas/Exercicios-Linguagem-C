/**
 * 45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII para resolver o
 *     problema.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;

    printf("Digite uma letra maiuscula: "); caractere = getchar();
    caractere += 32;
    printf("Caractere: %c.\n", caractere);
    
    return EXIT_SUCCESS;
}