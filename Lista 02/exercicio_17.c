/**
 * 17. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
 *     
 *     A = ((basemaior + basemenor) * altura) / 2.0;
 *
 *     Lembre-se a base maior e a base menor devem ser números maiores que zero.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float areaTrapezio(float baseMaior, float baseMenor, float altura);
void validaValor(float valor);
void mensagemDeErro();

int main()
{
	float baseMaior, baseMenor, altura, areaDoTrapezio;

	printf("Informe a base maior do trapezio: "); 	scanf("%f", &baseMaior);	validaValor(baseMaior);
	printf("Informe a base menor do trapezio: "); 	scanf("%f", &baseMenor);	validaValor(baseMenor);
	printf("Informe a altura do trapezio: "); 		scanf("%f", &altura);		validaValor(altura);

	printf("A area do trapezio e de %.2f.\n", areaTrapezio(baseMaior, baseMenor, altura));

	return EXIT_SUCCESS;
}

float areaTrapezio(float baseMaior, float baseMenor, float altura)
{
	return ((baseMaior + baseMenor) * altura) / 2.0;
}

void validaValor(float valor)
{
	if (valor <= 0)
	{
		mensagemDeErro();
		exit(EXIT_FAILURE);
	}
}

void mensagemDeErro()
{
	printf("\n");
	printf("Numero invalido.\n");
	printf("As bases e a altura precisam ser maior do que zero.\n");
}
