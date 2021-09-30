/**
 * 18. Leia um valor de volume em metros cúbicos m³ e apresente-o convertido em litros. A fórmula de conversão é:
 *     L = 1000 * M, sendo L o volume em litros e M o volume em metros cúbicos.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float litros, metros_cubicos;

    printf("Entre com um valor de volume em metros cubicos: "); scanf("%f", &metros_cubicos);
    litros = 1000 * metros_cubicos;
    printf("%.4f metro(s) cubico(s) equivale a %.4f litro(s).\n", metros_cubicos, litros);
    
    return EXIT_SUCCESS;
}