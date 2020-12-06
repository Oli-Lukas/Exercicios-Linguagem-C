/**
 * 12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão é:
 *     K = 1.61 * M, sendo K a distância em quilômetros e M em milhas.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float milhas, quilometros;

    printf("Entre com a distancia em milhas: "); scanf("%f", &milhas);
    quilometros = 1.61 * milhas;
    printf("%.2f milhas equivale a %.2f quilometros.\n", milhas, quilometros);
    
    return EXIT_SUCCESS;
}