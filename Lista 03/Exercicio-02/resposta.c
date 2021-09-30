/**
 * 02. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez deve
 *     usar a estrutura de repetição for, a segunda while, e a terceira do while.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void contadorForLoop(int inicio, int fim, int incremento);
void contadorWhileLoop(int inicio, int fim, int incremento);
void contadorDoWhileLoop(int inicio, int fim, int incremento);
bool validaArgumentos(int inicio, int fim, int incremento);

int main()
{
	contadorForLoop(1, 100, 1);	
	contadorWhileLoop(1, 100, 1);
	contadorDoWhileLoop(1, 100, 1);

	return EXIT_SUCCESS;
}

void contadorForLoop(int inicio, int fim, int incremento)
{
	bool argumentosValidos, incrementoPositivo;
	int contador;

	argumentosValidos  = validaArgumentos(inicio, fim, incremento);
	incrementoPositivo = (incremento > 0);

	if (argumentosValidos)
	{
		if (incrementoPositivo)
			for (contador = inicio; contador <= fim; contador += incremento)
				printf("%d\n", contador);
		else
			for (contador = inicio; contador >= fim; contador += incremento)
				printf("%d\n", contador);
	}
}

void contadorWhileLoop(int inicio, int fim, int incremento)
{
	bool argumentosValidos, incrementoPositivo;
	int contador;

	argumentosValidos  = validaArgumentos(inicio, fim, incremento);
	incrementoPositivo = (incremento > 0);

	if (argumentosValidos)
	{
		contador = inicio;

		if (incrementoPositivo)
			while (contador <= fim)
			{
				printf("%d\n", contador);
				contador += incremento;
			}
		else
			while (contador >= fim)
			{
				printf("%d\n", contador);
				contador += incremento;
			}
	}
}

void contadorDoWhileLoop(int inicio, int fim, int incremento)
{
	bool argumentosValidos, incrementoPositivo;
	int contador;

	argumentosValidos  = validaArgumentos(inicio, fim, incremento);
	incrementoPositivo = (incremento > 0);

	if (argumentosValidos)
	{
		contador = inicio;

		if (incrementoPositivo)
			do
			{
				printf("%d\n", contador);
				contador += incremento;
			}
			while(contador <= fim);
		else
			do
			{
				printf("%d\n", contador);
				contador += incremento;
			}
			while(contador >= fim);
	}
}

bool validaArgumentos(int inicio, int fim, int incremento)
{
	bool incrementoDiferenteDeZero, incrementoPositivo, incrementoNegativo;
	bool intervaloPossivel;

	intervaloPossivel = true;

	incrementoDiferenteDeZero = (incremento != 0);
	incrementoPositivo        = (incremento >  0);
	incrementoNegativo        = (incremento <  0);

	if (!incrementoDiferenteDeZero)
		intervaloPossivel = false;
	
	if (incrementoPositivo && inicio > fim)
		intervaloPossivel = false;
	
	if (incrementoNegativo && inicio < fim)
		intervaloPossivel = false;
	
	return intervaloPossivel;
}
