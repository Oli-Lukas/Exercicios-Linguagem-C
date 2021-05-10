/**
 * 33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço
 *     antigo, calcule e escreva o preço novo, e escreva uma mensagem em função
 *     do preço novo (de acordo com a segunda tabela).
 * 
 *     PREÇO ANTIGO				PERCENTUAL DE AUMENTO
 *     até R$ 50				5%
 *     entre R$ 50 e R$ 100		10%
 *     acima de R$ 100			15%
 * 
 *     PREÇO NOVO							MENSAGEM
 *     até R$ 80							Barato
 *     entre R$ 80 e R$ 120 (inclusive)		Normal
 *     entre R$ 120 e R$ 200 (inclusive)	Caro
 *     acima de R$ 200						Muito caro
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float lerPreco();
bool validaPreco(float preco);
float calculaNovoPreco(float precoAntigo);
float retornaPercentualAumento(float precoAntigo);
void exibeNovoPreco(float precoNovo, float precoAntigo);
char * retornaClassificacao(float precoNovo);

int main()
{
	float precoAntigo, precoNovo;

	precoAntigo = lerPreco();
	precoNovo   = calculaNovoPreco(precoAntigo);
	exibeNovoPreco(precoNovo, precoAntigo);
	
	return EXIT_SUCCESS;
}

float lerPreco()
{
	float preco;

	do
	{
		printf("Digite o preco antigo do produto: R$ "); scanf("%f", &preco);

		if (!validaPreco(preco))
		{
			printf("Erro! Preco digitado invalido!\n");
			printf("Tente novamente.\n\n");
		}
	}
	while (!validaPreco(preco));

	return preco;
}

bool validaPreco(float preco)
{
	return (preco > 0);
}

float calculaNovoPreco(float precoAntigo)
{
	float percentualDeAumento, novoPreco;

	percentualDeAumento = retornaPercentualAumento(precoAntigo);
	novoPreco = precoAntigo * (1 + percentualDeAumento);

	return novoPreco;
}

float retornaPercentualAumento(float precoAntigo)
{
	float taxa = 0.0;

	if (precoAntigo <= 50)
		taxa = (5.0 / 100.0);
	else if (precoAntigo > 50 && precoAntigo <= 100)
		taxa = (10.0 / 100.0);
	else
		taxa = (15.0 / 100.0);
	
	return taxa;
}

void exibeNovoPreco(float precoNovo, float precoAntigo)
{
	float diferenca, percentualUtilizado;

	diferenca = precoNovo - precoAntigo;
	percentualUtilizado = retornaPercentualAumento(precoAntigo);

	printf("\nPreco Antigo: R$ %.2f\n", precoAntigo);
	printf("Preco Novo  : R$ %.2f\n", precoNovo);
	printf("Diferenca   : R$ %.2f\n", diferenca);
	printf("Percentual aplicado: %.2f%%\n", (percentualUtilizado * 100));
	printf("Classificacao      : %s.\n", retornaClassificacao(precoNovo));
}

char * retornaClassificacao(float precoNovo)
{
	const char *classificacao;

	if (precoNovo <= 80)
		classificacao = "Barato";
	else if (precoNovo > 80 && precoNovo <= 120)
		classificacao = "Normal";
	else if (precoNovo > 120 && precoNovo <= 200)
		classificacao = "Caro";
	else
		classificacao = "Muito caro";
	
	return classificacao;
}
