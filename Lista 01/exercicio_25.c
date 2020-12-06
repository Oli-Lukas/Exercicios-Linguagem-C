/**
 * 25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m². A fórmula de conversão é:
 *     M = A * 4048.58, sendo M a área em metros quadrados e H a área em acres.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metrosQuadrados, acres;

    printf("Entre com um valor de area em acres: "); scanf("%f", &acres);
    metrosQuadrados = acres * 4048.58;
    printf("%.2f acre(s) equivale a %.2f metro(s) quadrado(s).\n", acres, metrosQuadrados);
    
    return EXIT_SUCCESS;
}