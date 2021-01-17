/**
 * 5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero;

	printf("Digite um numero inteiro: "); scanf("%d", &numero);

	if (numero % 2 == 0)
		printf("O numero %d e par.\n", numero);
	else
		printf("O numero %d e impar.\n", numero);
	
	return EXIT_SUCCESS;
}
