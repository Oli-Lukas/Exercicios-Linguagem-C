/**
 * 40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do distribuidor,
 *     e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica, de acordo com a
 *     tabela. Leia o custo de fábrica e escreva o custo ao consumidor.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float lerCustoDeFabrica();
bool validaCustoDeFabricacao(float custo);
float calculaCustoDeConsumidor(float custoDeFabrica);
float retornaCustoDoDistribuidor(float custoDeFabrica);
float retornaPorcentagemDoDistribuidor(float custoDeFabrica);
float retornaCustoDosImpostos(float custoDeFabrica);
float retornaPorcentagemDosImpostos(float custoDeFabrica);
void exibeDados(float custoDeFabrica, float custoDeConsumidor);

int main()
{
	float custoDeFabrica, custoDeConsumidor;

	custoDeFabrica = lerCustoDeFabrica();
	custoDeConsumidor = calculaCustoDeConsumidor(custoDeFabrica);

	// printf("O custo do consumidor eh: R$ %.2f\n", custoDeConsumidor);
	exibeDados(custoDeFabrica, custoDeConsumidor);

	return EXIT_SUCCESS;
}

float lerCustoDeFabrica()
{
	float custoDeFabricacao;

	do
	{
		printf("Digite o custo de fabrica: R$ "); scanf("%f", &custoDeFabricacao);

		if (!validaCustoDeFabricacao(custoDeFabricacao))
		{
			printf("Erro! Valor informado para custo de fabricacao invalido!\n");
			printf("Tente novamente!\n\n");
		}
	}
	while (!validaCustoDeFabricacao(custoDeFabricacao));

	return custoDeFabricacao;
}

bool validaCustoDeFabricacao(float custo)
{
	return (custo > 0);
}

float calculaCustoDeConsumidor(float custoDeFabrica)
{
	float custoDoDistribuidor, custoDosImpostos;
	float custoConsumidor;

	custoDoDistribuidor = retornaCustoDoDistribuidor(custoDeFabrica);
	custoDosImpostos    = retornaCustoDosImpostos(custoDeFabrica);

	custoConsumidor = custoDeFabrica + custoDoDistribuidor + custoDosImpostos;

	return custoConsumidor;
}

float retornaCustoDoDistribuidor(float custoDeFabrica)
{
	float custo, porcentagem;

	porcentagem = retornaPorcentagemDoDistribuidor(custoDeFabrica);
	custo = custoDeFabrica * porcentagem;

	return custo;
}

float retornaPorcentagemDoDistribuidor(float custoDeFabrica)
{
	float porcentagem = 0.0;

	if (custoDeFabrica < 12000)
		porcentagem = (5.0 / 100.0);
	else if (custoDeFabrica >= 12000 && custoDeFabrica <= 25000)
		porcentagem = (10.0 / 100.0);
	else
		porcentagem = (15.0 / 100.0);
	
	return porcentagem;
}

float retornaCustoDosImpostos(float custoDeFabrica)
{
	float custo, porcentagem;

	porcentagem = retornaPorcentagemDosImpostos(custoDeFabrica);
	custo = custoDeFabrica * porcentagem;

	return custo;
}

float retornaPorcentagemDosImpostos(float custoDeFabrica)
{
	float porcentagem = 0.0;

	if (custoDeFabrica >= 12000 && custoDeFabrica <= 25000)
		porcentagem = (15.0 / 100.0);
	else if (custoDeFabrica > 25000)
		porcentagem = (20.0 / 100.0);
	
	return porcentagem;
}

void exibeDados(float custoDeFabrica, float custoDeConsumidor)
{
	float custoDoDistribuidor, custoDosImpostos;

	custoDoDistribuidor = retornaCustoDoDistribuidor(custoDeFabrica);
	custoDosImpostos    = retornaCustoDosImpostos(custoDeFabrica);

	printf("Custo de Fabrica     : R$ %.2f\n", custoDeFabrica);
	printf("Custo de Consumidor  : R$ %.2f\n", custoDeConsumidor);
	printf("Custo do Distribuidor: R$ %.2f\n", custoDoDistribuidor);
	printf("Custo dos Impostos   : R$ %.2f\n", custoDosImpostos);
}
