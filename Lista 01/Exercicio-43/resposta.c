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
    float valor_total, total_pagar, parcela;
    float comissao_vista, comissao_parcelada;

    printf("Digite o valor total: "); scanf("%f", &valor_total);
    
    total_pagar        = valor_total * 0.90;
    parcela            = valor_total / 3.0;
    comissao_vista     = total_pagar * (5.0 / 100.0);
    comissao_parcelada = valor_total * (5.0 / 100.0);

    printf("Valor Total = R$ %.2f.\n", valor_total);
    printf("Total a Pagar = R$ %.2f.\n", total_pagar);
    printf("Parcela (3x sem juros) = R$ %.2f.\n", parcela);
    printf("Comissao do vendedor, caso a venda seja a vista = R$ %.2f.\n", comissao_vista);
    printf("Comissao do vendedor, caso a venda seja parcelada = R$ %.2f.\n", comissao_parcelada);

    return EXIT_SUCCESS;
}