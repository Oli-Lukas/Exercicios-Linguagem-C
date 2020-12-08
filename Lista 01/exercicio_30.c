/**
 * 30. Leia um valor em real e a cotação do dólar. Em seguida, imprima
 *     o valor correspondente em dólares.
 **/

#include <stdio.h>
#include <stdlib.h>

#define PRECO_DO_DOLAR 5.10

int main()
{
    float reais, dolares;
    
    printf("Entre com o valor em reais(R$): "); scanf("%f", &reais);
    dolares = reais / PRECO_DO_DOLAR;
    printf("R$ %.2f = U$D %.2f.\n", reais, dolares);

    return EXIT_SUCCESS;
}