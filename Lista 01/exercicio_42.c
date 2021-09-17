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
    float salario_base, salario_final;

    printf("Digite o salario-base do funcionario: "); scanf("%f", &salario_base);
    salario_final = salario_base * (1 + TAXA_DE_GRATIFICACAO);
    
    printf("Salario-base = R$ %.2f.\n", salario_base);
    printf("Salario com gratificacao = R$ %.2f.\n", salario_final);
    
    return EXIT_SUCCESS;
}