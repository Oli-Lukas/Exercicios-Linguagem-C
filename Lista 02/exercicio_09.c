/**
 * 9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20%
 *    do salário imprima: Empréstimo não concedido, caso contrário imprima: Empréstimo concedido.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool validaEmprestimo(float prestacao, float salario);
void imprimeStatusDoEmprestimo(bool status);

int main()
{
	float salario, prestacaoDoEmprestimo;
	
	printf("Digite o salario do trabalhador: R$ "); scanf("%f", &salario);
	printf("Digite o valor da prestacao do emprestimo: R$ "); scanf("%f", &prestacaoDoEmprestimo);

	imprimeStatusDoEmprestimo(validaEmprestimo(prestacaoDoEmprestimo, salario));
	
	return EXIT_SUCCESS;
}

bool validaEmprestimo(float prestacao, float salario)
{
	float vintePorCentoDoSalario;

	vintePorCentoDoSalario = salario * 0.20;

	return (prestacao <= vintePorCentoDoSalario);
}

void imprimeStatusDoEmprestimo(bool status)
{
	(status) ? printf("Emprestimo concedido.\n") : printf("Emprestimo nao concedido.\n");
}