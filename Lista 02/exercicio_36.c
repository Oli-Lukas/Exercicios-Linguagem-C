/**
 * 36. Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga
 *     ao vendedor. Para calcular a comissão, considere a tabela.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float lerVendas();
bool validaVenda(float venda);
float calculaComissao(float venda);
float calculaValorBase(float venda);
float retornaPercentualDeComissao(float venda);
void exibeDados(float venda, float comissao);

int main()
{
	float venda, comissao;

	venda    = lerVendas();
	comissao = calculaComissao(venda);
	exibeDados(venda, comissao);
	
	return EXIT_SUCCESS;
}

float lerVendas()
{
	float venda;

	do
	{
		printf("Digite o valor da venda: R$ "); scanf("%f", &venda);

		if (!validaVenda(venda))
		{
			printf("Erro! Valor digitado invalido!\n");
			printf("Tente novamente.\n\n");
		}
	}
	while (!validaVenda(venda));

	return venda;
}

bool validaVenda(float venda)
{
	return (venda > 0);
}

float calculaComissao(float venda)
{
	float comissao, valorBase, percentualDeComissao;

	valorBase            = calculaValorBase(venda);
	percentualDeComissao = retornaPercentualDeComissao(venda);
	
	comissao = valorBase + (percentualDeComissao * venda);

	return comissao;
}

float calculaValorBase(float venda)
{
	float valorBase = 0.0;

	if (venda < 20000)
		valorBase = 400;
	else if (venda >= 20000 && venda < 40000 )
		valorBase = 500;
	else if (venda >= 40000 && venda < 60000 )
		valorBase = 550;
	else if (venda >= 60000 && venda < 80000 )
		valorBase = 600;
	else if (venda >= 80000 && venda < 100000)
		valorBase = 650;
	else
		valorBase = 700;
	
	return valorBase;
}

float retornaPercentualDeComissao(float venda)
{
	return (venda < 100000) ? (14.0 / 100.0) : (16.0 / 100.0);
}

void exibeDados(float venda, float comissao)
{
	printf("\nValor da venda     : R$ %.2f\n", venda);
	printf("Comissao calculada : R$ %.2f\n", comissao);
	printf("Valor base         : R$ %.2f\n", calculaValorBase(venda));
	printf("Percentual aplicado: %.2f%%\n", (retornaPercentualDeComissao(venda) * 100.0));
	printf("Valor do percentual: R$ %.2f\n", (retornaPercentualDeComissao(venda) * venda));
}
