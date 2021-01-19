/**
 * 7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima
 *    a mensagem Números iguais.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	bool empatou = false;
	float numero1, numero2, maior;
	
	printf("Digite o primeiro numero: "); scanf("%f", &numero1);
	printf("Digite o segundo numero : "); scanf("%f", &numero2);

	if (numero1 > numero2)
		maior = numero1;
	else if (numero2 > numero1)
		maior = numero2;
	else
		empatou = true;
	
	if (!empatou)
		printf("O maior numero digitado foi %f.\n", maior);
	else
		printf("Numeros iguais.\n");

	return EXIT_SUCCESS;
}
