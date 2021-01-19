/**
 * 9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20%
 *    do salário imprima: Empréstimo não concedido, caso contrário imprima: Empréstimo concedido.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salario, vintePorCentoDoSalario, prestacaoDoEmprestimo;
	
	printf("Digite o salario do trabalhador: "); scanf("%f", &salario);
	printf("Digite o valor da prestacao do emprestimo: "); scanf("%f", &prestacaoDoEmprestimo);

	vintePorCentoDoSalario = salario * 0.20;
	
	if (prestacaoDoEmprestimo > vintePorCentoDoSalario)
		printf("Emprestimo nao concedido.\n");
	else
		printf("Emprestimo concedido.\n");

	
	return EXIT_SUCCESS;
}
