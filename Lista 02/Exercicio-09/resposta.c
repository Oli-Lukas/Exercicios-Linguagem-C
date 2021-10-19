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
	float salario, prestacao_emprestimo;
	
	printf("Digite o salario do trabalhador: R$ "); scanf("%f", &salario);
	printf("Digite o valor da prestacao do emprestimo: R$ "); scanf("%f", &prestacao_emprestimo);

	imprimeStatusDoEmprestimo(validaEmprestimo(prestacao_emprestimo, salario));
	
	return EXIT_SUCCESS;
}

bool validaEmprestimo(float prestacao, float salario)
{
	float vinte_por_cento_salario;

	vinte_por_cento_salario = salario * 0.20;

	return (prestacao <= vinte_por_cento_salario);
}

void imprimeStatusDoEmprestimo(bool status)
{
	(status) ? printf("Emprestimo concedido.\n") : printf("Emprestimo nao concedido.\n");
}