/**
 * 39. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o
 *     salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor salário terão
 *     um aumento proporcionalmente maior do que os funcionários com um salário maior, e conforme o
 *     tempo se serviço na empresa, cada funcionários irá receber um bônus adicional de salário. Faça
 *     um programa que leia:
 * 
 *     * O valor do salário atual do funcionário;
 *     * O tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
 * 
 *     Use a tabela para calcular o salário reajustado deste funcionário e imprima o valor do salário
 *     final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float lerSalario();
bool validaSalario(float salario);
int lerTempoDeServico();
bool validaTempoDeServico(int tempoDeServico);
float calculaNovoSalario(float salarioAtual, int tempoDeServico);
float retornaReajusteDoSalario(float salario);
float retornaBonus(int tempoDeServico);
void exibeDados(float salarioAtual, int tempoDeServico, float novoSalario);

int main()
{
	float salarioAtual, novoSalario;
	int tempoDeServico;

	lerDados(&salarioAtual, &tempoDeServico);
	novoSalario = calculaNovoSalario(salarioAtual, tempoDeServico);
	exibeDados(salarioAtual, tempoDeServico, novoSalario);

	return EXIT_SUCCESS;
}

void lerDados(float *ptrSalarioAtual, int *ptrTempoDeServico)
{
	*ptrSalarioAtual   = lerSalario();
	*ptrTempoDeServico = lerTempoDeServico();
}

float lerSalario()
{
	float salario;

	do
	{
		printf("Digite o seu salario atual: R$ "); scanf("%f", &salario);

		if (!validaSalario(salario))
		{
			printf("Erro! Salario digitado invalido!\n");
			printf("Tente novamente.\n\n");
		}
	}
	while (!validaSalario(salario));

	return salario;
}

bool validaSalario(float salario)
{
	return (salario > 0);
}

int lerTempoDeServico()
{
	int tempoDeServico;

	do
	{
		printf("Informe o seu tempo de servico: "); scanf("%d", &tempoDeServico);

		if (!validaTempoDeServico(tempoDeServico))
		{
			printf("Erro! Tempo de servico invalido!\n");
			printf("Tente novamente.\n\n");
		}
	}
	while (!validaTempoDeServico(tempoDeServico));

	return tempoDeServico;
}

bool validaTempoDeServico(int tempoDeServico)
{
	return (tempoDeServico >= 0);
}

float calculaNovoSalario(float salarioAtual, int tempoDeServico)
{
	float reajuste, bonus;
	float novoSalario;

	reajuste = retornaReajusteDoSalario(salarioAtual);
	bonus    = retornaBonus(tempoDeServico);

	novoSalario = (salarioAtual * (1.00 + reajuste)) + bonus;

	return novoSalario;
}

float retornaReajusteDoSalario(float salario)
{
	float reajuste = 0.0;

	if (salario <= 500)
		reajuste = (25.0 / 100.0);
	else if (salario <= 1000)
		reajuste = (20.0 / 100.0);
	else if (salario <= 1500)
		reajuste = (15.0 / 100.0);
	else if (salario <= 2000)
		reajuste = (10.0 / 100.0);
	else
		reajuste = 0.0;
	

	return reajuste;
}

float retornaBonus(int tempoDeServico)
{
	float bonus = 0.0;

	if (tempoDeServico == 0)
		bonus = 0.0;
	else if (tempoDeServico >= 1 && tempoDeServico <= 3)
		bonus = 100.0;
	else if (tempoDeServico >= 4 && tempoDeServico <= 6)
		bonus = 200.0;
	else if (tempoDeServico >= 7 && tempoDeServico <= 10)
		bonus = 300.0;
	else
		bonus = 500.0;
	

	return bonus;
}

void exibeDados(float salarioAtual, int tempoDeServico, float novoSalario)
{
	float reajusteDoSalario, bonus;

	reajusteDoSalario = retornaReajusteDoSalario(salarioAtual);
	bonus = retornaBonus(tempoDeServico);

	printf("\nSalario Atual: R$ %.2f\n", salarioAtual);
	printf("Tempo de Servico: %02d\n", tempoDeServico);

	(reajusteDoSalario != 0) ? 
		printf("Reajuste: %.1f%%\n", reajusteDoSalario * 100) : 
		printf("Reajuste: Nao ha reajuste para tal funcionario.\n"); 
	
	(bonus != 0) ? 
		printf("Bonus: R$ %.2f\n", bonus) : 
		printf("Bonus: Nao ha bonus para tal funcionario.\n");
	
	printf("Novo Salario: R$ %.2f\n", novoSalario);
}
