/**
 * 6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença
 *    existente entre ambos.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	bool empatou;
	int numero1, numero2, diferenca, maior;
	
	printf("Digite o primeiro numero: "); scanf("%d", &numero1);
	printf("Digite o segundo numero : "); scanf("%d", &numero2);

	if (numero1 > numero2)
	{
		diferenca = numero1 - numero2;
		maior = numero1;
	}
	else if (numero2 > numero1)
	{
		diferenca = numero2 - numero1;
		maior = numero2;
	}
	else
	{
		diferenca = 0;
		empatou = true;
	}

	if (!empatou)
		printf("O maior numero digitado foi %d.\n", numero2);
	else
		printf("Você digitou o mesmo numero duas vezes.\n");
	
	printf("diferenca = %d.\n", diferenca);

	return EXIT_SUCCESS;
}
