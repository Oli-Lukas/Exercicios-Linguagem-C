/**
 * 12. Faça um programa que leia um número inteiro positivo e imprima todos os números naturais de 0 até
 *     N em ordem decrescente.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FINAL_CONTAGEM 0

unsigned int lerNumero();
void contadorDecrescente(unsigned int inicio, unsigned int fim);
bool validaContador(unsigned int inicio, unsigned int fim);

int main()
{
	unsigned int numero;

	numero = lerNumero();
	contadorDecrescente(numero, FINAL_CONTAGEM);

	return EXIT_SUCCESS;
}

// Função 'lerNumero' copiada de 'exercicio_11.c'.
unsigned int lerNumero()
{
	unsigned int numero;

	printf("Digite um numero inteiro positivo: "); scanf("%u", &numero);

	return numero;
}

void contadorDecrescente(unsigned int inicio, unsigned int fim)
{
	if (validaContador(inicio, fim))
	{
		unsigned int contador;

		for (contador = inicio; contador > fim; contador--)
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
