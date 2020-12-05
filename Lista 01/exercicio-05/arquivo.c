/**
 * 5. Leia um número real e imprima a quinta parte deste
 *    número.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;

    printf("Informe um numero real: "); scanf("%f", &numero);
    printf("A quinta parte de %.4f e: %.4f.\n", numero, numero/5.0);
    
    return EXIT_SUCCESS;
}