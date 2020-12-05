/**
 * 4. Leia um número real e imprima o resultado do quadrado
 *    desse número.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;

    printf("Informe um numero real: "); scanf("%f", &numero);
    printf("O quadrado de %.4f e: %.4f.\n", numero, numero*numero);
    
    return EXIT_SUCCESS;
}