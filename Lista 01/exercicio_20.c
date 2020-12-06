/**
 * 20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de conversão é:
 *     L = (K / 0.45), sendo K a massa em quilogramas e L a massa em libras.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float libras, quilogramas;

    printf("Entre com um valor de massa em quilogramas: "); scanf("%f", &quilogramas);
    libras = (quilogramas / 0.45);
    printf("%.2f quilograma(s) equivale a %.2f libra(s).\n", quilogramas, libras);
    
    return EXIT_SUCCESS;
}