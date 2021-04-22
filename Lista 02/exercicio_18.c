/**
 * 18. Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas
 *     (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então
 *     pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int menu();
bool validaOpcao(int op);
float lerNumeroParaUsuario();
void executaOperacao(int opcao, float num1, float num2);

int main()
{
	float num1, num2;
	int op;

	op = menu();
	num1 = lerNumeroParaUsuario();
	num2 = lerNumeroParaUsuario();
	executaOperacao(op, num1, num2);
	
	return EXIT_SUCCESS;
}

int menu()
{
	int opcao;

	do
	{
		printf("\t\tMENU\n");
		printf("\t\t====\n\n");

		printf("\t####################\n");
		printf("\t# 1. Adicao        #\n");
		printf("\t# 2. Subtracao     #\n");
		printf("\t# 3. Multiplicacao #\n");
		printf("\t# 4. Divisao       #\n");
		printf("\t####################\n\n");

		printf("\tEscolha: "); scanf("%d", &opcao);
	
		if (!validaOpcao(opcao))
			printf("\tPor favor, digite um numero valido.");
	}
	while (!validaOpcao(opcao));

	return opcao;
}

bool validaOpcao(int op)
{
	return (op >= 1 && op <= 4) ? true : false;
}

float lerNumeroParaUsuario()
{
	float numero;

	printf("\tInforme um numero qualquer: "); scanf("%f", &numero);

	return numero;
}

void executaOperacao(int opcao, float num1, float num2)
{
	printf("\n\t");

	switch(opcao)
	{
		case 1:
			printf("A adicao de %.3f e %.3f eh %.3f.\n", num1, num2, num1 + num2);
			
			break;
		case 2:
			printf("A subtracao de %.3f por %.3f eh %.3f.\n", num1, num2, num1 - num2);
			
			break;
		case 3:
			printf("A multiplicacao de %.3f por %.3f eh %.3f.\n", num1, num2, num1 * num2);
			
			break;
		case 4:
			if (num2 != 0)
				printf("A divisao de %.3f por %.3f eh %.3f.\n", num1, num2, num1 / num2);
			else
				printf("erro! divisao impossivel!");
			
			break;
	}

	printf("\n");
}
