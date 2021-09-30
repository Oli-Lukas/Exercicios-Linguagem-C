/**
 * 6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença
 *    existente entre ambos.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lerNumero(const char *ordem);
bool eIgual(int num1, int num2);
int retornaMaiorNumero(int num1, int num2);
int retornaDiferenca(int num1, int num2);
int comparaNumeros(int num1, int num2, int *pDiferenca);

int main()
{
	bool empatou;
	int numero1, numero2, diferenca, maior;
	
	numero1 = lerNumero("primeiro");
	numero2 = lerNumero("segundo");

	if (!eIgual(numero1, numero2))
	{
		maior = retornaMaiorNumero(numero1, numero2);
		diferenca = retornaDiferenca(numero1, numero2);

		printf("O maior numero digitado foi %d.\n", maior);		
	}
	else
		printf("Voce digitou o mesmo numero duas vezes.\n");

	return EXIT_SUCCESS;
}

int lerNumero(const char *ordem)
{
	int numero;

	printf("Digite o %s numero: ", ordem); scanf("%d", &numero);

	return numero;
}

bool eIgual(int num1, int num2)
{
	return (num1 == num2);
}

int retornaMaiorNumero(int num1, int num2)
{
	return (num1 > num2) ? num1 : num2;
}

int retornaDiferenca(int num1, int num2)
{
	return (retornaMaiorNumero(num1, num2) == num1) ? (num1 - num2) : (num2 - num1);
}
