/**
 * 05. Faça um programa que peça ao usuário para digitar 10 valores e some-os.
 **/

#include <stdio.h>
#include <stdlib.h>

#define QTD_NUMEROS 10

int lerQuantidadeDeNumeros(int quantidade);
float lerNumero(int ordem);
void exibeSoma(float soma);

int main()
{
	float soma;

	soma = lerQuantidadeDeNumeros(QTD_NUMEROS);
	exibeSoma(soma);

	return EXIT_SUCCESS;
}

int lerQuantidadeDeNumeros(int quantidade)
{
	int contador;
	float soma, numero;

	soma   = 0.0;

	for (contador = 1; contador <= quantidade; contador++)
	{
		numero = lerNumero(contador);
		soma  += numero;
	}

	return soma;
}

float lerNumero(int ordem)
{
	float numero;

	printf("Digite o %do. numero: ", ordem); scanf("%f", &numero);

	return numero;
}

void exibeSoma(float soma)
{
	printf("\nA soma dos numeros digitados eh %.3f\n", soma);
}

#undef QTD_NUMEROS
