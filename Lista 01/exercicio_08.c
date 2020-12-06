/**
 * 8. Leia uma temperatura em graus Kelvin e apresente-a
 *    convertida em graus Celsius. A fórmula de conversão
 *    é: C = K - 273.15, sendo C a temperatura em Celsius e
 *    K a temperatura em Kelvin.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, kelvin;

    printf("Entre com a temperatura em Kelvin: "); scanf("%f", &kelvin);
    celsius = kelvin - 273.15;
    printf("%.3f Kelvin equivale a %.3f graus celsius.\n", kelvin, celsius);
    
    return EXIT_SUCCESS;
}