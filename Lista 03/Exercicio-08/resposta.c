/**
 * 08. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define QUANTIDADE_DE_NUMEROS 10

void lerQuantidadeDeNumeros(int quantidade, float *ptrMaiorNumero, float *ptrMenorNumero);
float lerNumero(int ordem);
float retornaMaiorNumero(float num1, float num2);
float retornaMenorNumero(float num1, float num2);
void exibeResultado(float maior, float menor);

int main()
{
	float maiorNumero, menorNumero;

	maiorNumero = 0.0;
	menorNumero = 0.0;

	lerQuantidadeDeNumeros(QUANTIDADE_DE_NUMEROS, &maiorNumero, &menorNumero);
	exibeResultado(maiorNumero, menorNumero);
	
	return EXIT_SUCCESS;
}

void lerQuantidadeDeNumeros(int quantidade, float *ptrMaiorNumero, float *ptrMenorNumero)
{
	int contador;
	float numero;
	bool primeiroLoop;

	for (contador = 1; contador <= quantidade; contador++)
	{
		numero = lerNumero(contador);

		primeiroLoop = (contador == 1);
		if (primeiroLoop)
		{
			*ptrMaiorNumero = numero;
			*ptrMenorNumero = numero;
		}
		else
		{
			*ptrMaiorNumero = retornaMaiorNumero(numero, *ptrMaiorNumero);
			*ptrMenorNumero = retornaMenorNumero(numero, *ptrMenorNumero);
		}
	}
}

float lerNumero(int ordem)
{
	float numero;

	printf("Digite o %do. numero: ", ordem); scanf("%f", &numero);

	return numero;
}

float retornaMaiorNumero(float num1, float num2)
{
	return (num1 > num2) ? num1 : num2;
}

float retornaMenorNumero(float num1, float num2)
{
	return (num1 < num2) ? num1 : num2;
}

void exibeResultado(float maior, float menor)
{
	printf("\n");
	printf("O maior numero digitado foi: %.3f\n", maior);
	printf("O menor numero digitado foi: %.3f\n", menor);
	printf("\n");
}

#undef QUANTIDADE_DE_NUMEROS