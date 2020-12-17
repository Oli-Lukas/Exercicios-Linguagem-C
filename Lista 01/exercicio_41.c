/**
 * 41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês.
 *     Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroDeHorasTrabalhadas;
    float valorDaHora, valorFinal;

    printf("Digite o valor da hora de trabalho: "); scanf("%f", &valorDaHora);
    printf("Quantas horas foram trabalhadas no mes: "); scanf("%d", &numeroDeHorasTrabalhadas);

    valorFinal = valorDaHora * numeroDeHorasTrabalhadas;
    valorFinal *= 1.10;

    printf("Valor Final: R$ %.2f.\n", valorFinal);
    
    return EXIT_SUCCESS;
}