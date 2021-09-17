/**
 * 41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês.
 *     Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero_horas_trabalhadas;
    float valor_hora, valor_final;

    printf("Digite o valor da hora de trabalho: "); scanf("%f", &valor_hora);
    printf("Quantas horas foram trabalhadas no mes: "); scanf("%d", &numero_horas_trabalhadas);

    valor_final = valor_hora * numero_horas_trabalhadas;
    valor_final *= 1.10;

    printf("Valor Final: R$ %.2f.\n", valor_final);
    
    return EXIT_SUCCESS;
}