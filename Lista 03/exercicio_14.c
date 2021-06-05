/**
 * 14. Faça um programa que leia um número inteiro positivo par N e imprima todos os números pares de 0
 *     até N em ordem decrescente.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FINAL_CONTAGEM 0

unsigned int lerNumero();
bool validaNumero(unsigned int numero);
void contadorParesDecrescente(unsigned int inicio, unsigned int fim);
bool validaContador(unsigned int inicio, unsigned int fim);

int main()
{
	unsigned int numero;

	numero = lerNumero();
	contadorParesDecrescente(numero, FINAL_CONTAGEM);
	
	return EXIT_SUCCESS;
}

// Função 'lerNumero' copiada de 'exercicio_13.c'.
unsigned int lerNumero()
{
	unsigned int numero;
	bool numeroValido;

	do
	{
		printf("Digite um numero inteiro positivo par: "); scanf("%u", &numero);

		numeroValido = validaNumero(numero);
		if (!numeroValido)
			printf("Numero digitado invalido! Digite um numero inteiro positivo par!\n");
	}
	while(!numeroValido);

	return numero;
}

bool validaNumero(unsigned int numero)
{
	return (numero % 2 == 0);
}

void contadorParesDecrescente(unsigned int inicio, unsigned int fim)
{
	if (validaContador(inicio, fim))
	{
		unsigned int contador;

		for (contador = inicio; contador > fim; contador-=2)
			printf("%u\n", contador);
		
		printf("%u\n", fim);
	}
	else
		printf("\nValores informados invalidos! Nao eh possivel realizar a contagem!\n");
}

bool validaContador(unsigned int inicio, unsigned int fim)
{
	return (inicio > fim);
}

#undef FINAL_CONTAGEM
