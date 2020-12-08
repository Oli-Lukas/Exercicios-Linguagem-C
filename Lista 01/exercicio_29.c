/**
 * 29. Leia quatro notas, calcule a média aritmética e imprima
 *     o resultado.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero, soma = 0.0, media = 0.0;

    printf("Informe um numero: "); scanf("%f", &numero);
    soma += numero;
    printf("Informe outro numero: "); scanf("%f", &numero);
    soma += numero;
    printf("Informe outro numero: "); scanf("%f", &numero);
    soma += numero;
    printf("Informe outro numero: "); scanf("%f", &numero);
    soma += numero;

    media = soma / 4.0;
    printf("A media aritmetica dos numeros informados e %f.\n", media);

    return EXIT_SUCCESS;
}