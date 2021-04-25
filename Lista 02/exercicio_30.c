/**
 * 30. Faça um programa que receba três números e mostre-os em ordem crescente.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAMANHO_ARRAY 3

int lerNumero();
void ordenaNumeros(int *num1, int *num2, int *num3);
void selectionSort(int *array);
void permutaValores(int *num1, int *num2);

int main()
{
	int num1, num2, num3;

	num1 = lerNumero();
	num2 = lerNumero();
	num3 = lerNumero();

	ordenaNumeros(&num1, &num2, &num3);

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);

	return EXIT_SUCCESS;
}

int lerNumero()
{
	int numero;

	printf("Digite um numero: "); scanf("%d", &numero);

	return numero;
}

void ordenaNumeros(int *num1, int *num2, int *num3)
{
	int array[TAMANHO_ARRAY] = {*num3, *num2, *num1};

	selectionSort(array);

	*num3 = array[2];
	*num2 = array[1];
	*num1 = array[0];
}

void selectionSort(int *array)
{
	int indiceDoMenor, temporario;

	for (int i = 0; i < (TAMANHO_ARRAY - 1); i++)
	{
		indiceDoMenor = i;
	
		for (int j = i+1; j < TAMANHO_ARRAY; j++)
			if (array[j] < array[indiceDoMenor])
				indiceDoMenor = j;

		permutaValores(&array[indiceDoMenor], &array[i]);
	}
}

void permutaValores(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;	
}

#undef TAMANHO_ARRAY