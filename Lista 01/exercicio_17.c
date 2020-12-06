/**
 * 17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A fórmula de conversão é:
 *     P = (C / 2.54), sendo C o comprimento em centímetros e P o comprimento em polegadas.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float centimetros, polegadas;

    printf("Entre com o valor do comprimento em centimetros: "); scanf("%f", &centimetros);
    polegadas = (centimetros / 2.54);
    printf("%.3f centimetro(s) equivale a %.3f polegada(s).\n", centimetros, polegadas);
    
    return EXIT_SUCCESS;
}