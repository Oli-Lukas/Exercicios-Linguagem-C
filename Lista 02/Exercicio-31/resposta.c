/**
 * 31. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com
 *     a tabela, verifique e mostra qual a classificação dessa pessoa.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float lerAltura();
float lerPeso();
bool valorValido(float numero);
void exibeClassificacao(float altura, float peso);
char * retornaClassificacao(float altura, float peso);

int main()
{
	float altura, peso;

	altura = lerAltura();
	peso   = lerPeso();

	exibeClassificacao(altura, peso);

	return EXIT_SUCCESS;
}

float lerAltura()
{
	float altura;

	do
	{
		printf("Digite a sua altura: "); scanf("%f", &altura);
		
		if (!valorValido(altura))
			printf("Erro! valor digitado invalido!\n\n");
	}
	while (!valorValido(altura));

	return altura;
}

float lerPeso()
{
	float peso;

	do
	{
		printf("Digite o seu peso: "); scanf("%f", &peso);
		
		if (!valorValido(peso))
			printf("Erro! valor digitado invalido!\n\n");
	}
	while (!valorValido(peso));

	return peso;
}

bool valorValido(float numero)
{
	return (numero > 0);
}

void exibeClassificacao(float altura, float peso)
{
	printf("\nAltura       : %.2f\n", altura);
	printf("Peso         : %.2f\n", peso);
	printf("Classificacao: %s\n", retornaClassificacao(altura, peso));
}

char * retornaClassificacao(float altura, float peso)
{
	if (altura < 1.20)
	{
		if (peso <= 60)
			return "A";
		else if (peso >= 60 && peso <= 90)
			return "D";
		else
			return "G";
	}
	else if (altura >= 1.20 && altura <= 1.70)
	{
		if (peso <= 60)
			return "B";
		else if (peso >= 60 && peso <= 90)
			return "E";
		else
			return "H";
	}
	else
	{
		if (peso <= 60)
			return "C";
		else if (peso >= 60 && peso <= 90)
			return "F";
		else
			return "I";
	}
}
