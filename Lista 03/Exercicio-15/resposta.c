/**
 * 15. Faça um programa que leia um número positivo ímpar N e imprima todos os números ímpares de 1 até
 *     N em ordem crescente.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define INICIO_CONTAGEM 1

unsigned int lerNumero();
bool validaNumero(unsigned int numero);
void contadorImparesCrescente(unsigned int inicio, unsigned int fim);
bool validaContador(unsigned int inicio, unsigned int fim);

int main()
{
	unsigned int numero;

	numero = lerNumero();
	contadorImparesCrescente(INICIO_CONTAGEM, numero);
	
	return EXIT_SUCCESS;
}

unsigned int lerNumero()
{
	unsigned int numero;
	bool numeroValido;

	do
	{
		printf("Digite um numero inteiro positivo impar: "); scanf("%u", &numero);

		numeroValido = validaNumero(numero);
		if (!numeroValido)
			printf("Numero digitado invalido! Digite um numero inteiro positivo impar!\n");
	}
	while (!numeroValido);

	return numero;
}

bool validaNumero(unsigned int numero)
{
	return (numero % 2 == 1);
}

void contadorImparesCrescente(unsigned int inicio, unsigned int fim)
{
	if (validaContador(inicio, fim))
	{
		unsigned int contador;

		for (contador = inicio; contador < fim; contador+=2)
			printf("%u\n", contador);
		
		printf("%u\n", fim);
	}
	else
		printf("\nValores informados invalidos! Nao eh possivel realizar a contagem!\n");
}

bool validaContador(unsigned int inicio, unsigned int fim)
{
	return (inicio < fim);
}

#undef INICIO_CONTAGEM