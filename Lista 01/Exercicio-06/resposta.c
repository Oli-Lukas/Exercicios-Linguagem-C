/**
 * 6. Leia uma temperatura em graus Celsius e apresente-a
 *    convertida em graus Fahrenheit. A fórmula de conversão
 *    é: F = C * (9.0 / 5.0) + 32.0, sendo F a temperatura
 *    em Fahrenheit e C a temperatura em Celsius.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;

    printf("Entre com uma temperatura em graus Celsius: "); scanf("%f", &celsius);
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    printf("%.3f graus celsius equivale a %.3f graus Fahrenheit.\n", celsius, fahrenheit);
    
    return EXIT_SUCCESS;
}