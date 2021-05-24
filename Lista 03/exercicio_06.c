/**
 * 06. Faça um programa que leia 10 inteiros e imprima sua média.
 **/

#include <stdio.h>
#include <stdlib.h>

#define QTD_NUMEROS 10

int lerQuantidadeDeNumeros(int quantidade);
int lerNumero(int ordem);
float calculaMedia(int soma, int quantidade);
void exibeMedia(float media);

int main()
{
	int soma;
	float media;

	soma  = lerQuantidadeDeNumeros(QTD_NUMEROS);
	media = calculaMedia(soma, QTD_NUMEROS);
	exibeMedia(media);

	return EXIT_SUCCESS;
}

int lerQuantidadeDeNumeros(int quantidade)
{
	int soma, numero, contador;

	soma = 0;

	for (contador = 1; contador <= quantidade; contador++)
	{
		numero = lerNumero(contador);
		soma  += numero;
	}

	return soma;
}

int lerNumero(int ordem)
{
	int numero;

	printf("Digite o %do. numero: ", ordem); scanf("%d", &numero);

	return numero;
}

float calculaMedia(int soma, int quantidade)
{
	return (soma / (quantidade / 1.0));
}

void exibeMedia(float media)
{
	printf("\nA media dos numeros digitados eh %.3f\n", media);
}

#undef QTD_NUMEROS
