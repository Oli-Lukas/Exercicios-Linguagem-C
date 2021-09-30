/**
 * 28. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma
 *     das seguintes médias de acordo com um valor numérico digitado pelo usuário:
 *     
 *     a) Geométrica;
 *     b) Ponderada;
 *     c) Harmônica;
 *     d) Aritmética.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define OPCAO_MEDIA_GEOMETRICA 1
#define OPCAO_MEDIA_PONDERADA 2
#define OPCAO_MEDIA_HARMONICA 3
#define OPCAO_MEDIA_ARITMETICA 4

int lerNumero();
int defineMedia();
float calculaMedia(int numero1, int numero2, int numero3, int tipoDeMedia);
float calculaMediaGeometrica(int numero1, int numero2, int numero3);
float calculaMediaPonderada(int numero1, int numero2, int numero3);
float calculaMediaHarmonica(int numero1, int numero2, int numero3);
float calculaMediaAritmetica(int numero1, int numero2, int numero3);
void exibeMedia(float media, int tipoDeMedia);

int main()
{
	int num1, num2, num3;
	int opcao;
	float media;

	num1 = lerNumero();
	num2 = lerNumero();
	num3 = lerNumero();
	
	opcao = defineMedia();

	media = calculaMedia(num1, num2 ,num3, opcao);
	exibeMedia(media, opcao);

	return EXIT_SUCCESS;
}

int lerNumero()
{
	int numero;

	do
	{
		printf("Entre com um numero inteiro: "); scanf("%d", &numero);
	}
	while (numero <= 0);

	return numero;
}

int defineMedia()
{
	int opcao;

	do
	{
		printf("Informe qual tipo de media deseja calcular:\n");
		printf("1. Media geometrica.\n");
		printf("2. Media Ponderada.\n");
		printf("3. Media Harmonica.\n");
		printf("4. Media Aritmetica.\n");
		printf("Opcao: "); scanf("%d", &opcao);

		if (opcao < 1 || opcao > 4)
			printf("Opcao invalida! Digite um valor valido (entre 1 e 4)!\n\n");
	}
	while (opcao < 1 || opcao > 4);

	return opcao;
}

float calculaMedia(int numero1, int numero2, int numero3, int tipoDeMedia)
{
	float media;

	if (tipoDeMedia == OPCAO_MEDIA_GEOMETRICA)
		media = calculaMediaGeometrica(numero1, numero2, numero3);
	else if (tipoDeMedia == OPCAO_MEDIA_PONDERADA)
		media = calculaMediaPonderada(numero1, numero2, numero3);
	else if (tipoDeMedia == OPCAO_MEDIA_HARMONICA)
		media = calculaMediaHarmonica(numero1, numero2, numero3);
	else if (tipoDeMedia == OPCAO_MEDIA_ARITMETICA)
		media = calculaMediaAritmetica(numero1, numero2, numero3);

	return media;
}

float calculaMediaGeometrica(int numero1, int numero2, int numero3)
{
	return pow((numero1 * numero2 * numero3), 1.0 / 3.0);
}

float calculaMediaPonderada(int numero1, int numero2, int numero3)
{
	return (numero1 + (numero2 * 2) + (numero3 * 3)) / 6.0;
}

float calculaMediaHarmonica(int numero1, int numero2, int numero3)
{
	return (3.0 /( (1.0 / numero1) + (1.0 / numero2) + (1.0 / numero3) ));
}

float calculaMediaAritmetica(int numero1, int numero2, int numero3)
{
	return (numero1 + numero2 + numero3) / 3.0;
}

void exibeMedia(float media, int tipoDeMedia)
{
	char nomeMedia[50];

	(tipoDeMedia == OPCAO_MEDIA_GEOMETRICA) ? strcpy(nomeMedia, "Media Geometrica") :
	(tipoDeMedia == OPCAO_MEDIA_PONDERADA)  ? strcpy(nomeMedia, "Media Ponderada")  :
	(tipoDeMedia == OPCAO_MEDIA_HARMONICA)  ? strcpy(nomeMedia, "Media Harmonica")  :
	strcpy(nomeMedia, "Media Aritmetica");

	printf("%s: %f.\n", nomeMedia, media);
}

#undef OPCAO_MEDIA_GEOMETRICA
#undef OPCAO_MEDIA_PONDERADA
#undef OPCAO_MEDIA_HARMONICA
#undef OPCAO_MEDIA_ARITMETICA
