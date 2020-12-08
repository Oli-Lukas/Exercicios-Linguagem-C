/**
 * 28. Faça a leitura de três valores e apresente como resultado
 *     a soma dos quadrados dos três valores lidos.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero, quadrado, soma = 0;

    printf("Informe um numero qualquer: "); scanf("%f", &numero);
    quadrado = numero * numero;
    soma += quadrado;
    printf("Informe outro numero: "); scanf("%f", &numero);
    quadrado = numero * numero;
    soma += quadrado;
    printf("Informe outro numero: "); scanf("%f", &numero);
    quadrado = numero * numero;
    soma += quadrado;

    printf("A soma dos quadrados: %.3f\n", soma);
    
    return EXIT_SUCCESS;
}