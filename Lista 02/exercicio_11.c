/**
 * 11. Escreva um programa que leia um número inteiro maior do
 *     que zero e devolva, na tela, a soma de todos os seus
 *     algarismos. Por exemplo, ao número 251 corresponderá o
 *     valor 8 (2 + 5 + 1). Se o número lido não for maior do
 *     que zero, o programa terminará com a mensagem "Número inválido".
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero, multiplo, algarismo = 0, temp, soma = 0;

	printf("Digite um numero inteiro: "); scanf("%d", &numero);

	temp = numero;
	multiplo = 10;

	// algarismo das unidades.
	while (temp % multiplo != 0)
	{
		algarismo++;
		temp -= 1;
	}
	printf("%d ", algarismo);
	soma += algarismo;
	algarismo = 0;

	// algarismos restantes.
	while (temp > 0)
	{
		if ((temp - (algarismo * multiplo)) % (multiplo * 10) == 0)
		{
			printf("%d ", algarismo);
			soma += algarismo;
			temp -= (algarismo * multiplo);

			algarismo = 0;
			multiplo *= 10;
		}
		else
			algarismo++;
	}

	putchar('\n');
	printf("soma = %d.\n", soma);
	
	return EXIT_SUCCESS;
}
