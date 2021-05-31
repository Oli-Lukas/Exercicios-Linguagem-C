/**
 * 11. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0
 *     até N em ordem crescente.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define INICIO_CONTAGEM 0

int lerNumero();
void contadorCrescente(unsigned int inicio, unsigned int fim);
bool validaContador(int inicio, int fim);

int main()
{
	unsigned int numero;

	numero = lerNumero();
	contadorCrescente(INICIO_CONTAGEM, numero);
	
	return EXIT_SUCCESS;
}

int lerNumero()
{
	unsigned int numero;

	printf("Digite um numero inteiro positivo: "); scanf("%u", &numero);

	return numero;
}

void contadorCrescente(unsigned int inicio, unsigned int fim)
{
	if (validaContador(inicio, fim))
	{
		unsigned int contador;

		for (contador = inicio; contador < fim; contador++)
			printf("%u\n", contador);
		
		printf("%u\n", contador);
	}
	else
		printf("\nValores informados invalidos! Nao eh possivel realizar a contagem!\n");
}

bool validaContador(unsigned int inicio, unsigned int fim)
{
	return (inicio < fim);
}

#undef INICIO_CONTAGEM
