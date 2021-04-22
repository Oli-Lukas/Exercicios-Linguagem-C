/**
 * 21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação
 *     escolhida. Escreva uma mensagem de erro se a opção for inválida.
 *     
 *     Escolha a opção:
 *     1- Soma de 2 números.
 *     2- Diferença entre 2 números (maior pelo menor).
 *     3- Produto entre 2 números.
 *     4- Divisão entre 2 números (o denominador não pode ser zero).
 *     Opção
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define PRIMEIRA_OPCAO_POSSIVEL 1
#define ULTIMA_OPCAO_POSSIVEL 4

int menu();
int lerNumero();
void trataOpcao(int opcao, int num1, int num2);
int retornaMaiorNumeroInteiro(int num1, int num2);
void ordenaValores(int *numero1, int *numero2);
bool eOpcaoValida(int opcao);

int main()
{
	int num1, num2, opcao;

	opcao = menu();
	if (eOpcaoValida(opcao))
	{
		num1 = lerNumero();	
		num2 = lerNumero();
	}
	trataOpcao(opcao, num1, num2);	
	
	return EXIT_SUCCESS;
}

int menu()
{
	int opcao;

	printf("Escolha a opcao:\n");
	printf("1 - Soma de 2 numeros.\n");
	printf("2 - Diferenca entre 2 numeros (maior pelo menor).\n");
	printf("3 - Produto entre 2 numeros.\n");
	printf("4 - Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
	printf("Opcao \n"); scanf("%d", &opcao);

	return opcao;
}

int lerNumero()
{
	int numero;

	printf("Digite um numero inteiro: "); scanf("%d", &numero);

	return numero;
}

void trataOpcao(int opcao, int num1, int num2)
{
	switch (opcao)
	{
		case 1:
			printf("%d + %d = %d.\n", num1, num2, num1+num2);
			break;
		case 2:
			ordenaValores(&num1, &num2);

			printf("%d - %d = %d.\n", num1, num2, num1-num2);
			break;
		case 3:
			printf("%d x %d = %d.\n", num1, num2, num1*num2);
			break;
		case 4:
			if (num2 != 0)
				printf("%d / %d = %d.\n", num1, num2, num1/num2);
			else
				printf("Erro! Denominador igual a zero.");
			break;
		
		default:
			printf("Erro! Opcao escolhida invalida!");
			break;
	}
}

int retornaMaiorNumeroInteiro(int num1, int num2)
{
	return (num1 > num2) ? num1 : num2;	
}

void ordenaValores(int *numero1, int *numero2)
{
	if (retornaMaiorNumeroInteiro(*numero1, *numero2) == *numero2)
	{
		int temporario;

		temporario = *numero1;
		*numero1 = *numero2;
		*numero2 = temporario;
	}
}

bool eOpcaoValida(int opcao)
{
	return (opcao >= PRIMEIRA_OPCAO_POSSIVEL && opcao <= ULTIMA_OPCAO_POSSIVEL) ? true : false;
}

#undef PRIMEIRA_OPCAO_POSSIVEL
#undef ULTIMA_OPCAO_POSSIVEL