/**
 * 21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de conversão é:
 *     K = L * 0.45, sendo K a massa em quilogramas e L a massa em libras.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilogramas, libras;

    printf("Entre com um valor de massa em libras: "); scanf("%f", &libras);
    quilogramas = libras * 0.45;
    printf("%.2f libra(s) equivale a %.2f quilograma(s).\n", libras, quilogramas);
    
    return EXIT_SUCCESS;
}