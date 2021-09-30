/**
 * 10. Leia uma velocidade em km/h (quilômetros por hora) e 
 *     apresente-a convertida em m/s (metros por segundo).
 *     A fórmula de conversão é: M = K / 3.6, sendo K a
 *     velocidade em km/h e M em m/s.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, ms;

    printf("Entre com a velocidade em Km/h: "); scanf("%f", &km);
    ms = km / 3.6;
    printf("%.2f Km/h equivale a %.2f m/s.\n", km, ms);
    
    return EXIT_SUCCESS;
}