/**
 * 41. Faça um algoritmo que calcule o IMC de uma pessoa e mostre a sua classificação de acordo
 *     com a tabela.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float lerAltura();
bool validaAltura(float altura);
float lerPeso();
bool validaPeso(float peso);
void erroValorInvalido();
float calculaIMC(float peso, float altura);
char * retornaClassificacao(float imc);

int main()
{
	float altura, peso, imc;
	const char* classificacao;

	altura = lerAltura();
	peso   = lerPeso();

	imc = calculaIMC(peso, altura);
	classificacao = retornaClassificacao(imc);

	printf("IMC: %.1f\n", imc);
	printf("Classificacao: %s\n", classificacao);
	
	return EXIT_SUCCESS;
}

float lerAltura()
{
	float altura;

	do
	{
		printf("Digite a sua altura: "); scanf("%f", &altura);

		if (!validaAltura(altura)) erroValorInvalido();
	}
	while (!validaAltura(altura));

	return altura;
}

bool validaAltura(float altura)
{
	return (altura > 0);
}

float lerPeso()
{
	float peso;

	do
	{
		printf("Digite o seu peso: "); scanf("%f", &peso);

		if (!validaPeso(peso)) erroValorInvalido();
	}
	while (!validaPeso(peso));

	return peso;
}

bool validaPeso(float peso)
{
	return (peso > 0);
}

void erroValorInvalido()
{
	printf("Erro! Valor digitado invalido!\n");
	printf("Tente novamente.\n\n");
}

float calculaIMC(float peso, float altura)
{
	return (peso / (altura * altura));
}

char * retornaClassificacao(float imc)
{
	if (imc < 18.5)
		return "Abaixo do Peso";
	else if (imc >= 18.5 && imc < 25.0)
		return "Saudavel";
	else if (imc >= 25.0 && imc < 30.0)
		return "Peso em excesso";
	else if (imc >= 30.0 && imc < 35.0)
		return "Obesidade Grau I";
	else if (imc >= 35.0 && imc < 40.0)
		return "Obesidade Grau II (severa)";
	else
		return "Obesidade Grau III (morbida)";
}
