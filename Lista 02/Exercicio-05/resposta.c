/**
 * 5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ePar(int numero);
void exibeParidade(int numero);

int main()
{
	int numero;

	printf("Digite um numero inteiro: "); scanf("%d", &numero);
	exibeParidade(numero);
	
	return EXIT_SUCCESS;
}

bool ePar(int numero)
{
	return (numero % 2 == 0);
}

void exibeParidade(int numero)
{
	if (ePar(numero)) printf("O numero %d eh par.\n", numero);
	else              printf("O numero %d eh impar.\n", numero);	
}
