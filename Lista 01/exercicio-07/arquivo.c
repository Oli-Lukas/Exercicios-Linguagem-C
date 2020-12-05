/**
 * 7. Leia uma temperatura em graus Fahrenheit e apresente-a
 *    convertida em graus Celsius. A fórmula de conversão
 *    é: C = 5.0 * (F - 32.0) / 9.0, sendo C a temperatura
 *    em Celsius e F a temperatura em Fahrenheit.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;

    printf("Entre com a temperatura em Fahrenheit: "); scanf("%f", &fahrenheit);
    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;
    printf("%.3f graus fahrenheit equivale a %.3f graus celsius.", fahrenheit, celsius);
    
    return EXIT_SUCCESS;
}