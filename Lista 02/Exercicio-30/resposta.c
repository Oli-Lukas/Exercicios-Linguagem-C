/**
 * 30. Faça um programa que receba três números e mostre-os em ordem crescente.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAMANHO_ARRAY 3

float lerNumero();
void ordenaNumeros(float *num1, float *num2, float *num3);
void selectionSort(float *array);
void permutaValores(float *num1, float *num2);

int main()
{
	float num1, num2, num3;

	num1 = lerNumero();
	num2 = lerNumero();
	num3 = lerNumero();

	ordenaNumeros(&num1, &num2, &num3);

	printf("%.4f\n", num1);
	printf("%.4f\n", num2);
	printf("%.4f\n", num3);

	return EXIT_SUCCESS;
}

float lerNumero()
{
	float numero;

	printf("Digite um numero: "); scanf("%f", &numero);

	return numero;
}

void ordenaNumeros(float *num1, float *num2, float *num3)
{
	float array[TAMANHO_ARRAY] = {*num3, *num2, *num1};

	selectionSort(array);

	*num3 = array[2];
	*num2 = array[1];
	*num1 = array[0];
}

void selectionSort(float *array)
{
	int indiceDoMenor;

	for (int i = 0; i < (TAMANHO_ARRAY - 1); i++)
	{
		indiceDoMenor = i;
	
		for (int j = i+1; j < TAMANHO_ARRAY; j++)
			if (array[j] < array[indiceDoMenor])
				indiceDoMenor = j;

		permutaValores(&array[indiceDoMenor], &array[i]);
	}
}

void permutaValores(float *num1, float *num2)
{
	float temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;	
}

#undef TAMANHO_ARRAY