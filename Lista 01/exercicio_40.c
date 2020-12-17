/**
 * 40. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o número de dias
 *     trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são
 *     descontados 8% para imposto de renda.
 **/

#include <stdio.h>
#include <stdlib.h>

#define DIARIA 30.0
#define TAXA_DO_IMPOSTO_DE_RENDA 0.08

int main()
{
    int numeroDeDias = 0;
    float valorLiquido, valorBruto, impostoDeRenda;

    printf("Quantos dias o encanador trabalhou? "); scanf("%d", &numeroDeDias);
    printf("\n");

    valorBruto = numeroDeDias * DIARIA;
    impostoDeRenda = valorBruto * TAXA_DO_IMPOSTO_DE_RENDA;
    valorLiquido = valorBruto - impostoDeRenda;

    printf("Valor Bruto      = R$ %.2f.\n", valorBruto);
    printf("Imposto de Renda = R$ %.2f.\n", impostoDeRenda);
    printf("Valor Liquido    = R$ %.2f.\n", valorLiquido);

    return EXIT_SUCCESS;
}