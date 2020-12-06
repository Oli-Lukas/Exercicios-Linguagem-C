/**
* 27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m². A fórmula de conversão é:
*     M = H * 10000, sendo M a área em metros quadrados e H a área em hectares.
**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metrosQuadrados, hectares;

    printf("Entre com um valor de area em hectares: "); scanf("%f", &hectares);
    metrosQuadrados = hectares * 10000;
    printf("%.4f hectare(s) equivale a %.4f metro(s) quadrado(s).\n", hectares, metrosQuadrados);
    
    return EXIT_SUCCESS;
}