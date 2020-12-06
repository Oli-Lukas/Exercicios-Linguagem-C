/**
 * 24. Leia um valor de área em metros quadrados m² e apresente-o convertido em acres. A fórmula de conversão é:
 *     A = M * 0.000247, sendo M a área em metros quadrados e A a área em acres.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float acres, metrosQuadrados;

    printf("Entre com o valor de area em metros quadrados: "); scanf("%f", &metrosQuadrados);
    acres = metrosQuadrados * 0.000247;
    printf("%.2f metro(s) quadrado(s) equivale a %.2f acre(s).\n", metrosQuadrados, acres);
    
    return EXIT_SUCCESS;
}