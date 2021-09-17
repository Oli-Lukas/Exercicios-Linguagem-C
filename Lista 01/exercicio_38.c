/**
 * 38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um
 *     aumento de 25%.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novo_salario;

    printf("Informe o salario do funcionario: "); scanf("%f", &salario);
    novo_salario = (salario * 1.25);
    printf("Salario com aumento: R$ %.2f.\n", novo_salario);
    
    return EXIT_SUCCESS;
}