/**
 * 36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um cilindro
 *     circular é calculado por meio da seguinte fórmula: V = pi * raio² * altura, onde pi = 3.141592.
 **/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592

int main()
{
    float raio, altura, volume;
    
    printf("Entre com o valor do raio  : "); scanf("%f", &raio);
    printf("Entre com o valor da altura: "); scanf("%f", &altura);

    volume = PI * (raio * raio) * altura;

    printf("raio   = %.4f.\n", raio);
    printf("altura = %.4f.\n", altura);
    printf("volume = %.4f.\n", volume);

    return EXIT_SUCCESS;
}

#undef PI