/**
 * 26. Leia um valor de área em metros quadrados m² e apresente-o convertido em hectares. A fórmula de conversão é:
 *     H = M * 0.0001, sendo M a área em metros quadrados e H a área em hectares.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hectares, metrosQuadrados;

    printf("Entre com um valor de area em metros quadrados: "); scanf("%f", &metrosQuadrados);
    hectares = metrosQuadrados * 0.0001;
    printf("%.4f metro(s) quadrado(s) equivale a %.4f hectare(s).\n", metrosQuadrados, hectares);
    
    return EXIT_SUCCESS;
}