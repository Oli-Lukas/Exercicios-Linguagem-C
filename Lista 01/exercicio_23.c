/**
 * 23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de conversão é:
 *     J = (M / 0.91), sendo J o comprimento em jardas e M o comprimento em metros.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jardas, metros;

    printf("Entre com um valor de comprimento em metros: "); scanf("%f", &metros);
    jardas = (metros / 0.91);
    printf("%.2f metro(s) equivale a %.2f jarda(s).\n", metros, jardas);
    
    return EXIT_SUCCESS;
}