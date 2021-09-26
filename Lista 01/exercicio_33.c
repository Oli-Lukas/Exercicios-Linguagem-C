/**
 * 33. Leia o tamanho do lado de um quadrado e imprima como resultado
 *     a sua área.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado_quadrado, area_quadrado;

    printf("Informe o lado de um quadrado: "); scanf("%f", &lado_quadrado);

    area_quadrado = lado_quadrado * lado_quadrado;

    printf("lado do quadrado = %.2f.\n", lado_quadrado);
    printf("area do quadrado = %.2f.\n", area_quadrado);

    return EXIT_SUCCESS;
}