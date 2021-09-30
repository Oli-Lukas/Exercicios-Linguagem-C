/**
 * 19. Faça um programa para verificar se um determinado número inteiro é divisível por 3 ou
 *     5, mas não simultaneamente pelos dois.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lerNumeroInteiro();
void imprimeResultado(int numero, bool divisibilidadePor3, bool divisibilidadePor5);

int main()
{
	int numero;
	bool eDivisivelPor3, eDivisivelPor5;

	numero = lerNumeroInteiro();

	eDivisivelPor3 = (numero % 3 == 0);
	eDivisivelPor5 = (numero % 5 == 0);

	imprimeResultado(numero, eDivisivelPor3, eDivisivelPor5);
	
	return EXIT_SUCCESS;
}

void imprimeResultado(int numero, bool divisibilidadePor3, bool divisibilidadePor5)
{
	printf("%d %s divisivel por 3.\n", numero, divisibilidadePor3 ? "eh" : "nao eh");
	printf("%d %s divisivel por 5.\n", numero, divisibilidadePor5 ? "eh" : "nao eh");
}

int lerNumeroInteiro()
{
	int numero;

	printf("Digite um numero inteiro qualquer: "); scanf("%d", &numero);

	return numero;
}
