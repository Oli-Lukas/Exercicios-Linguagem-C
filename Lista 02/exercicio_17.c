/**
 * 17. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
 *     
 *     A = ((basemaior + basemenor) * altura) / 2.0;
 *
 *     Lembre-se a base maior e a base menor devem ser números maiores que zero.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float baseMaior, baseMenor, altura, areaDoTrapezio;

	printf("Informe a base maior do trapezio: "); scanf("%f", &baseMaior);
	if (baseMaior <= 0)
	{
		printf("Numero invalido.\n");
		printf("As bases precisam ser maior do que zero.\n");
		return EXIT_FAILURE;
	}

	printf("Informe a base menor do trapezio: "); scanf("%f", &baseMenor);
	if (baseMenor <= 0)
	{
		printf("Numero invalido.\n");
		printf("As bases precisam ser maior do que zero.\n");
		return EXIT_FAILURE;
	}

	printf("Informe a altura do trapezio: "); scanf("%f", &altura);

	areaDoTrapezio = ((baseMaior + baseMenor) * altura) / 2.0;

	printf("A area do trapezio e de %.2f.\n", areaDoTrapezio);

	return EXIT_SUCCESS;
}
