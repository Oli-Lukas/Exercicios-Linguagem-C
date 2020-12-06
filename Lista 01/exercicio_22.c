/**
 * 22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de conversão é:
 *     M = 0.91 * J, sendo J o comprimento em jardas e M o comprimento em metros.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metros, jardas;

    printf("Entre com um valor de comprimento em jardas: "); scanf("%f", &jardas);
    metros = 0.91 * jardas;
    printf("%.2f jarda(s) equivale a %.2f metro(s).\n", jardas, metros);
    
    return EXIT_SUCCESS;
}