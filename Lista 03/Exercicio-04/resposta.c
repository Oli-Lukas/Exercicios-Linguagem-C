/**
 * 04. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000, 
 *     imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define CONTAGEM_INICIAL 0
#define CONTAGEM_FIM 100000
#define INCREMENTO 1000

void contadorForLoop(int inicio, int fim, int incremento);
bool validaArgumentos(int inicio, int fim, int incremento);

int main()
{
	contadorForLoop(CONTAGEM_INICIAL, CONTAGEM_FIM, INCREMENTO);
	
	return EXIT_SUCCESS;
}

// Função 'contadorForLoop' copiada de 'exercicio_02.c'.
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

// Função 'validaArgumentos' copiada de 'exercicio_02.c'.
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

#undef CONTAGEM_INICIAL
#undef CONTAGEM_FIM
#undef INCREMENTO