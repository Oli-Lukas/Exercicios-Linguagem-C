/**
 * 9. Leia uma temperatura em graus Celsius e apresente-a
 *    convertida em graus Kelvin. A fórmula de conversão é:
 *    K = C + 273.15, sendo C a temperatura em Celsius e K
 *    a temperatura em Kelvin.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, kelvin;

    printf("Entre com a temperatura em graus Celsius: "); scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("%.3f graus celsius equivale a %.3f Kelvin.\n", celsius, kelvin);
    
    return EXIT_SUCCESS;
}