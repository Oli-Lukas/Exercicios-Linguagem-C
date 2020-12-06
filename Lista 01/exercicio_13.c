/**
 * 13. Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de conversão é:
 *     M = (K / 1.61), sendo K a distância em quilômetros e M em milhas.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float milhas, quilometros;

    printf("Entre com a distancia em quilometros: "); scanf("%f", &quilometros);
    milhas = (quilometros / 1.61);
    printf("%.2f quilometros equivale a %.2f milhas.\n", quilometros, milhas);
    
    return EXIT_SUCCESS;
}