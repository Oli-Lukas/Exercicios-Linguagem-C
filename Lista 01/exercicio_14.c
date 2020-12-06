/**
 * 14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é
 *     R = G * pi/180, sendo G o ângulo em graus e R em radianos e pi = 3.14.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radianos, graus;

    printf("Entre com um angulo em graus: "); scanf("%f", &graus);
    radianos = graus * (3.14 / 180);
    printf("%.2f grau(s) equivale a %.2f radiano(s).\n", graus, radianos);
    
    return EXIT_SUCCESS;
}