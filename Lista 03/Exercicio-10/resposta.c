/**
 * 10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define QUANTIDADE_DE_NUMEROS_PARES_A_SOMAR 50
#define VALOR_INICIAL 0

int somaPares(int inicio, int quantidade);
bool ePar(int numero);

int main()
{
	int soma;

	soma = somaPares(VALOR_INICIAL, QUANTIDADE_DE_NUMEROS_PARES_A_SOMAR);
	printf("A soma dos 50 primeiros numeros pares eh %d.\n", soma);	
	
	return EXIT_SUCCESS;
}

int somaPares(int inicio, int quantidade)
{
	int paresEncontrados, soma, contador;

	paresEncontrados = 0;
	soma = 0;
	contador = inicio;

	while (paresEncontrados < quantidade)
	{
		if (ePar(contador))
		{
			soma += contador;
			paresEncontrados++;
			contador += 2;
		}
		else contador++;
	}

	return soma;
}

bool ePar(int numero)
{
	return (numero % 2 == 0);
}

#undef QUANTIDADE_DE_NUMEROS_PARES_A_SOMAR
#undef VALOR_INICIAL