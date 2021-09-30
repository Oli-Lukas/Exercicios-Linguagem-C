/**
 * 07. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define QTD_NUMEROS 10

int lerQuantidadeDeNumeros(int quantidade, int *qtdNumerosValidos);
int lerNumero(int ordem);
bool validaNumero(int numero);
float calculaMedia(int soma, int quantidade);
void exibeMedia(float media);

int main()
{
	int soma, qtdDeNumerosValidos;
	float media;

	qtdDeNumerosValidos = 0;

	soma  = lerQuantidadeDeNumeros(QTD_NUMEROS, &qtdDeNumerosValidos);
	media = calculaMedia(soma, qtdDeNumerosValidos);
	exibeMedia(media);
	
	return EXIT_SUCCESS;
}

int lerQuantidadeDeNumeros(int quantidade, int *qtdNumerosValidos)
{
	int soma, qtdDeNumerosValidos, numero, contador;

	soma = 0;

	for (contador = 1; contador <= QTD_NUMEROS; contador++)
	{
		numero = lerNumero(contador);

		if (validaNumero(numero))
		{
			soma += numero;
			(*qtdNumerosValidos)++;
		}
	}

	return soma;
}

int lerNumero(int ordem)
{
	int numero;

	printf("Digite o %do. numero: ", ordem); scanf("%d", &numero);

	return numero;
}

bool validaNumero(int numero)
{
	return (numero > 0);
}

float calculaMedia(int soma, int quantidade)
{
	return (soma / (quantidade / 1.0));
}

void exibeMedia(float media)
{
	printf("\nA media dos numeros positivos digitados eh %.3f\n", media);
}

#undef QTD_NUMEROS