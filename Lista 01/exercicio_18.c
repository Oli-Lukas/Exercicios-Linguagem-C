/**
 * 18. Leia um valor de volume em metros cúbicos m³ e apresente-o convertido em litros. A fórmula de conversão é:
 *     L = 1000 * M, sendo L o volume em litros e M o volume em metros cúbicos.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float litros, metrosCubicos;

    printf("Entre com um valor de volume em metros cubicos: "); scanf("%f", &metrosCubicos);
    litros = 1000 * metrosCubicos;
    printf("%.4f metro(s) cubico(s) equivale a %.4f litro(s).\n", metrosCubicos, litros);
    
    return EXIT_SUCCESS;
}