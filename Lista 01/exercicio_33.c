/**
 * 33. Leia o tamanho do lado de um quadrado e imprima como resultado
 *     a sua área.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, area;

    printf("Informe o lado de um quadrado: "); scanf("%f", &lado);
    area = lado * lado;
    printf("lado do quadrado = %.2f.\n", lado);
    printf("area do quadrado = %.2f.\n", area);
    
    return EXIT_SUCCESS;
}