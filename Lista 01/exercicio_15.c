/**
 * 15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é:
 *     G = R * (180 / pi), sendo G o ângulo em graus e R em radianos e pi = 3.14.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float graus, radianos;

    printf("Entre com o angulo em radianos: "); scanf("%f", &radianos);
    graus = radianos * (180 / 3.14);
    printf("%.2f radiano(s) equivale a %.2f grau(s).\n", radianos, graus);
    
    return EXIT_SUCCESS;
}