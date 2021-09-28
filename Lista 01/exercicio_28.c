/**
 * 28. Faça a leitura de três valores e apresente como resultado
 *     a soma dos quadrados dos três valores lidos.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero, soma = 0;

    printf("Informe um numero qualquer: "); scanf("%f", &numero);
    soma += (numero * numero);

    printf("Informe outro numero: "); scanf("%f", &numero);
    soma += (numero * numero);

    printf("Informe outro numero: "); scanf("%f", &numero);
    soma += (numero * numero);

    printf("A soma dos quadrados: %.3f\n", soma);
    
    return EXIT_SUCCESS;
}