/**
 * 12. Ler um número inteiro. Se o número lido for negativo,
 *     escreva a mensagem "Número inválido". Se o número for
 *     positivo, calcular o logaritmo deste número.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int numero;

	printf("Digite um numero inteiro: "); scanf("%d", &numero);
	
	if (numero > 0)
		printf("O logaritmo de %d = %f.\n", numero, log10f(numero));
	else
		printf("Numero invalido.\n");

	return EXIT_SUCCESS;
}
