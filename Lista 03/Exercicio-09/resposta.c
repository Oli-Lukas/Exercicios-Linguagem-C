/**
 * 09. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais
 *     ímpares.
 **/

#include <stdio.h>
#include <stdlib.h>

int lerNumero();
int modulo(int numero);
void contador(int limite);

int main()
{
	int numero;

	numero = lerNumero();
	contador(modulo(numero));
	
	return EXIT_SUCCESS;
}

int lerNumero()
{
	int numero;

	printf("Digite um numero inteiro: "); scanf("%d", &numero);

	return numero;
}

int modulo(int numero)
{
	return (numero < 0) ? -numero : numero;
}

void contador(int limite)
{
	for (int contador = 1; contador <= limite; contador++)
		printf("%d\n", contador);
}
