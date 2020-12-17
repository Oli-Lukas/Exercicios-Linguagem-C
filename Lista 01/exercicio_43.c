/**
 * 43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
 *
 *     * O total a pagar com desconto de 10%;
 *     * O valor de cada parcela, no parcelamento de 3x sem juros;
 *     * A comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
 *     * A comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorTotal, totalAPagar, parcela;
    float comissaoAVista, comissaoParcelada;

    printf("Digite o valor total: "); scanf("%f", &valorTotal);
    
    totalAPagar = valorTotal * 0.90;
    parcela = valorTotal / 3.0;
    comissaoAVista = totalAPagar * (5.0 / 100.0);
    comissaoParcelada = valorTotal * (5.0 / 100.0);

    printf("Valor Total = R$ %.2f.\n", valorTotal);
    printf("Total a Pagar = R$ %.2f.\n", totalAPagar);
    printf("Parcela (3x sem juros) = R$ %.2f.\n", parcela);
    printf("Comissao do vendedor, caso a venda seja a vista = R$ %.2f.\n", comissaoAVista);
    printf("Comissao do vendedor, caso a venda seja parcelada = R$ %.2f.\n", comissaoParcelada);

    return EXIT_SUCCESS;
}