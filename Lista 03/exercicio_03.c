/**
 * 03. Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
 *     iniciando em 10 e terminando em 0. Mostrar uma mensagem "FIM!" após a contagem.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define CONTAGEM_INICIO 10
#define CONTAGEM_FIM 0
#define INCREMENTO -1

void contadorWhileLoop(int inicio, int fim, int incremento);
bool validaArgumentos(int inicio, int fim, int incremento);

int main()
{
	contadorWhileLoop(CONTAGEM_INICIO, CONTAGEM_FIM, INCREMENTO);
	printf("FIM!\n");
	
	return EXIT_SUCCESS;
}

// Função 'contadorWhileLoop' copiada de 'exercicio_02.c'.
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

#undef CONTAGEM_INICIO
#undef CONTAGEM_FIM
#undef INCREMENTO
