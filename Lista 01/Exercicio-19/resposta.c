/**
 * 19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m³. A fórmula de conversão é:
 *     M = (L / 1000), sendo L o volume em litros e M o volume em metros cubicos.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float litros, metros_cubicos;

    printf("Entre com um valor de volume em litros: "); scanf("%f", &litros);
    metros_cubicos = (litros / 1000);
    printf("%.4f litro(s) equivale a %.4f metro(s) cubico(s).\n", litros, metros_cubicos);
    
    return EXIT_SUCCESS;
}