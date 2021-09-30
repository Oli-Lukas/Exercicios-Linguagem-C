/**
 * 01. Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números
 *     maiores que 0.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define QTD_DE_NUMEROS_PARA_EXIBIR 5
#define MULTIPLO_ALVO 3
#define VALOR_INICIAL_CONTAGEM 1

void exibeMultiplos(int multiploAlvo, int aPartirDe, int quantidade);
bool eMultiplo(int numero, int supostoDivisor);

int main()
{
	exibeMultiplos(MULTIPLO_ALVO, VALOR_INICIAL_CONTAGEM, QTD_DE_NUMEROS_PARA_EXIBIR);

	return EXIT_SUCCESS;
}

void exibeMultiplos(int multiploAlvo, int aPartirDe, int quantidade)
{
	int contador, multiplosEncontrados;

	contador = aPartirDe;
	multiplosEncontrados = 0;

	while (multiplosEncontrados < quantidade)
	{
		if (eMultiplo(contador, multiploAlvo))
		{
			multiplosEncontrados++;
			printf("Multiplo de %d: %d\n", multiploAlvo, contador);
		}

		contador++;
	}
}

bool eMultiplo(int numero, int supostoDivisor)
{
	return (numero % supostoDivisor == 0);
}

#undef QTD_DE_NUMEROS_PARA_EXIBIR
#undef MULTIPLO_ALVO
#undef VALOR_INICIAL_CONTAGEM