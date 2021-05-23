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

bool eMultiplo(int numero, int supostoDivisor);

int main()
{
	int contador, qtdDeMultiplosDe3;

	contador = VALOR_INICIAL_CONTAGEM;
	qtdDeMultiplosDe3 = 0;

	while (qtdDeMultiplosDe3 < QTD_DE_NUMEROS_PARA_EXIBIR)
	{
		if (eMultiplo(contador, MULTIPLO_ALVO))
		{
			printf("Multiplo de %d: %d\n", MULTIPLO_ALVO,contador);	
			qtdDeMultiplosDe3++;
		}
		contador++;
	}
	
	return EXIT_SUCCESS;
}

bool eMultiplo(int numero, int supostoDivisor)
{
	return (numero % supostoDivisor == 0);
}

#undef QTD_DE_NUMEROS_PARA_EXIBIR
#undef MULTIPLO_ALVO
#undef VALOR_INICIAL_CONTAGEM