/**
 * 24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
 *     possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%).
 *     Faça um programa em que o usuário entre com o valor e o estado destino do
 *     produto e o programa retorne o preço final do produto acrescido do imposto do estado
 *     em que ele será vendido. Se o estado digitado não for válido, mostrar uma mensagem
 *     de erro.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool validaNumeroEstado(int numero);
int lerNumeroEstado();
float calculaValorTotal(float valorInicial, int numeroEstado);
float calculaTaxaDeImposto(int numeroDoEstado);

int main()
{
	float precoInicial, precoFinal;
	int numeroEstado;

	printf("Digite o valor inicial do produto: R$ "); scanf("%f", &precoInicial);

	numeroEstado = lerNumeroEstado();
	if (validaNumeroEstado(numeroEstado))
	{
		precoFinal = calculaValorTotal(precoInicial, numeroEstado);
		printf("O valor final do produto eh R$ %.2f.\n", precoFinal);
	}
	else
		printf("Numero de estado invalido!\n");
	
	return EXIT_SUCCESS;
}

bool validaNumeroEstado(int numero)
{
	if (numero >= 1 && numero <= 4)
		return true;
	else
		return false;
}

int lerNumeroEstado()
{
	int numero;

	printf("Indique em qual estado o produto sera vendido:\n");
	printf("(1 - MG | 2 - SP | 3 - RJ | 4 - MS)\n");
	printf("Digite o numero correspondente: "); scanf("%d", &numero);

	return numero;
}

float calculaValorTotal(float valorInicial, int numeroEstado)
{
	float taxaDeImposto, Impostos;

	taxaDeImposto = calculaTaxaDeImposto(numeroEstado);
	Impostos = valorInicial * taxaDeImposto;

	return valorInicial + Impostos;
}

float calculaTaxaDeImposto(int numeroDoEstado)
{
	float taxa;

	switch (numeroDoEstado)
	{
		case 1:
			taxa = 0.07;
			break;
		case 2:
			taxa = 0.12;
			break;
		case 3:
			taxa = 0.15;
			break;
		case 4:
			taxa = 0.08;
			break;
	}

	return taxa;
}
