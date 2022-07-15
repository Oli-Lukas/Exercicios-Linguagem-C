/**
 * 17. Faça um programa que leia um número inteiro positivo n e calcule a soma dos n
 *     primeiros números naturais.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lerNumero();
bool validaNumero(int numero);
int somaNatural(int numero);
void exibe(int numero, int soma);

int main()
{
	int numero, soma;

	numero = lerNumero();
	soma = somaNatural(numero);
	exibe(numero, soma);
	
	return EXIT_SUCCESS;
}

int lerNumero()
{
	int numero;

	do
	{
		printf("Digite um numero inteiro positivo: "); scanf("%d", &numero);

		if (!validaNumero(numero))
		{
			printf("O numero digitado eh invalido.\n");
			printf("Por favor digite um numero inteiro positivo.\n");
		}
	}
	while(!validaNumero(numero));

	return numero;
}

bool validaNumero(int numero)
{
	return (numero > 0);
}

int somaNatural(int numero)
{
	int soma = 0;

	for (int contador = 1; contador <= numero; contador++)
		soma += contador;
	
	return soma;
}

void exibe(int numero, int soma)
{
	printf("O numero digitado foi: %d\n", numero);
	printf("Resultado da soma: %d\n", soma);
}