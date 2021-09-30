/**
 * 26. Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro
 *     em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
 *     a tabela abaixo:
 *     
 *     CONSUMO		Km/l	MENSAGEM
 *     menor que	8		Venda o carro!
 *     entre		8 e 14	Econômico!
 *     maior que	12		Super econômico!
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float lerDistanciaPercorrida();
float lerGasolinaConsumida();
char * retornaMensagem(float consumo);

int main()
{
	float percurso, litros, consumo;
	const char *mensagem;

	percurso = lerDistanciaPercorrida();
	litros   = lerGasolinaConsumida();

	consumo = percurso / litros;

	mensagem = retornaMensagem(consumo);
	printf("Consumo: %.2f Km/l\n", consumo);
	printf("%s\n", mensagem);
	
	return EXIT_SUCCESS;
}

float lerDistanciaPercorrida()
{
	float distancia;

	do
	{
		printf("Digite qual a distancia que foi percorrida(Em Km): "); scanf("%f", &distancia);
		
		if (distancia <= 0)
		{
			printf("Erro! Valor digitado invalido!\n");
			printf("Eh necessario que o valor seja maior do que zero.\n\n");
		}
	}
	while (distancia <= 0);

	return distancia;
}

float lerGasolinaConsumida()
{
	float volumeGasolina;

	do
	{
		printf("Digite qual foi o volume de gasolina consumido(em litros): "); scanf("%f", &volumeGasolina);
		
		if (volumeGasolina <= 0)
		{
			printf("Erro! Valor digitado invalido!\n");
			printf("Eh necessario que o valor seja maior do que zero.\n\n");
		}
	}
	while (volumeGasolina <= 0);

	return volumeGasolina;
}

char * retornaMensagem(float consumo)
{
	if (consumo < 8)
		return "Venda o carro!";
	else if (consumo >= 8 && consumo <= 14)
		return "Economico!";
	else
		return "Super economico!";
}
