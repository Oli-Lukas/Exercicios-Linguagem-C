/**
 * 22. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
 *     aposentar. As condições para aposentadoria são:
 *     
 *     * Ter pelo menos 65 anos;
 *     * Ou ter trabalhado pelo menos 30 anos;
 *     * Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool aposentadoriaPorIdade(int idade);
bool aposentadoriaPorTempoDeServico(int tempoDeServico);
bool aposentadoriaPorIdadeETempoDeServico(int idade, int tempoDeServico);
bool direitoAAposentadoria(int idade, int tempoDeServico, const char **tipoDeAposentadoria);

int main()
{
	const char *tipoDeAposentadoria;
	int idade, tempoDeServico;

	printf("Digite a sua idade: "); scanf("%d", &idade);
	printf("Digite o tempo de servico: "); scanf("%d", &tempoDeServico);
	
	if (direitoAAposentadoria(idade, tempoDeServico, &tipoDeAposentadoria))
	{
		printf("Voce pode se aposentar.\n");
		printf("Modalidade de Aposentadoria: %s.\n", tipoDeAposentadoria);
	}
	else
		printf("Voce nao pode se aposentar.\n");
	
	return EXIT_SUCCESS;
}

bool aposentadoriaPorIdade(int idade)
{
	return (idade >= 65) ? true : false;
}

bool aposentadoriaPorTempoDeServico(int tempoDeServico)
{
	return (tempoDeServico >= 30) ? true : false;
}

bool aposentadoriaPorIdadeETempoDeServico(int idade, int tempoDeServico)
{
	bool condicaoDeIdade, condicaoDeTempoDeServico;

	condicaoDeIdade = (idade >= 60);
	condicaoDeTempoDeServico = (tempoDeServico >= 25);

	return (condicaoDeIdade && condicaoDeTempoDeServico) ? true : false;
}

bool direitoAAposentadoria(int idade, int tempoDeServico, const char **tipoDeAposentadoria)
{
	if (aposentadoriaPorIdadeETempoDeServico(idade, tempoDeServico))
	{
		*tipoDeAposentadoria = "Aposentadoria por Idade e Tempo de Servico";

		return true;
	}

	if (aposentadoriaPorTempoDeServico(tempoDeServico))
	{
		*tipoDeAposentadoria = "Aposentadoria por Tempo de Servico";

		return true;
	}

	if (aposentadoriaPorIdade(idade))
	{
		*tipoDeAposentadoria = "Aposentadoria por Idade";

		return true;
	}

	return false;
}
