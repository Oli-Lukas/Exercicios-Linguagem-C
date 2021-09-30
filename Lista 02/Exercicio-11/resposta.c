/**
 * 11. Escreva um programa que leia um número inteiro maior do
 *     que zero e devolva, na tela, a soma de todos os seus
 *     algarismos. Por exemplo, ao número 251 corresponderá o
 *     valor 8 (2 + 5 + 1). Se o número lido não for maior do
 *     que zero, o programa terminará com a mensagem "Número inválido".
 **/

#include <stdio.h>
#include <stdlib.h>

int lerNumero();
int retornaQtdAlgarismos(int numero);
int retornaAlgarismo(int posicao, int numero);
int imprimeAlgarismosERetornaSoma(int numero, int qtdAlgarismos);
void exibeSoma(int soma);

int main()
{
	int numero, qtdAlgarismos, algarismo, soma;

	numero = lerNumero();	
	soma = imprimeAlgarismosERetornaSoma(numero, retornaQtdAlgarismos(numero));
	exibeSoma(soma);

	return EXIT_SUCCESS;
}

int lerNumero()
{
	int numero;

	do
	{
		printf("Digite um numero inteiro maior do que zero: "); scanf("%d", &numero);
	}
	while (numero <= 0);

	return numero;
}

int retornaQtdAlgarismos(int numero)
{
	int limite = 10, qtdAlgarismos = 1;

	while (!(numero < limite))
	{
		limite *= 10;
		qtdAlgarismos++;
	}

	return qtdAlgarismos;
}

int retornaAlgarismo(int posicao, int numero)
{
	int algarismo, modulo = 10;

	for (int count = 1; count <= posicao; count++)
	{
		algarismo = numero % modulo;
		numero -= algarismo;

		algarismo /= (modulo / 10);
		modulo *= 10;
	}

	return algarismo;
}

int imprimeAlgarismosERetornaSoma(int numero, int qtdAlgarismos)
{
	int algarismo, soma;

	soma = 0;

	for (int count = qtdAlgarismos; count >= 1; count--)
	{
		algarismo = retornaAlgarismo(count, numero);

		printf("%d ", algarismo);
		soma += algarismo;
	}

	return soma;
}

void exibeSoma(int soma)
{
	printf("\n");
	printf("Soma = %d.\n", soma);
}
