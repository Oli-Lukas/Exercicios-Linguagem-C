/**
 * 34. Leia o valor do raio de um círculo calcule e imprima a área do círculo correspondente. A área do círculo
 *     é pi * raio², considere pi = 3.141592.
 **/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592

int main()
{
    float raio, area;

    printf("Informe o raio do circulo: "); scanf("%f", &raio);
    area = PI * (raio * raio);
    printf("Raio do circulo: %.4f.\n", raio);
    printf("Area do circulo: %.4f.\n", area);
    
    return EXIT_SUCCESS;
}

#undef PI