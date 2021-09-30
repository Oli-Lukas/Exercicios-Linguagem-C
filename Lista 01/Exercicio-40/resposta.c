/**
 * 40. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o número de dias
 *     trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são
 *     descontados 8% para imposto de renda.
 **/

#include <stdio.h>
#include <stdlib.h>

#define DIARIA 30.0
#define TAXA_IMPOSTO_RENDA 0.08

int main()
{
    int numero_dias = 0;
    float valor_liquido, valor_bruto, imposto_renda;

    printf("Quantos dias o encanador trabalhou? "); scanf("%d", &numero_dias);
    printf("\n");

    valor_bruto   = numero_dias * DIARIA;
    imposto_renda = valor_bruto * TAXA_IMPOSTO_RENDA;
    valor_liquido = valor_bruto - imposto_renda;

    printf("Valor Bruto      = R$ %.2f.\n", valor_bruto);
    printf("Imposto de Renda = R$ %.2f.\n", imposto_renda);
    printf("Valor Liquido    = R$ %.2f.\n", valor_liquido);

    return EXIT_SUCCESS;
}

#undef DIARIA
#undef TAXA_IMPOSTO_RENDA