/**
 * 42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse
 *     funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o
 *     salário-base.
 **/

#include <stdio.h>
#include <stdlib.h>

#define TAXA_DE_GRATIFICACAO 0.05

int main()
{
    float salarioBase, salarioFinal;

    printf("Digite o salario-base do funcionario: "); scanf("%f", &salarioBase);
    salarioFinal = salarioBase * (1 + TAXA_DE_GRATIFICACAO);
    printf("Salario-base = R$ %.2f.\n", salarioBase);
    printf("Salario com gratificacao = R$ %.2f.\n", salarioFinal);
    
    return EXIT_SUCCESS;
}