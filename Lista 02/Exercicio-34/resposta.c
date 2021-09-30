/**
 * 34. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo
 *     com a tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução
 *     de conceito.
 * 
 *     NOTA				CONCEITO (ATÉ 20 FALTAS)	CONCEITO (MAIS DE 20 FALTAS)
 *     9.0 até 10.0		A							B
 *     7.5 até 8.9		B							C
 *     5.0 até 7.4		C							D
 *     4.0 até 4.9		D							E
 *     0.0 até 3.9		E							E
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float lerNota();
bool validaNota(float nota);
int lerQuantidadeDeFaltas();
bool validaQuantidadeDeFaltas(int quantidadeDeFaltas);
void exibeResultadoDoAluno(float nota, int qtdFaltas);
char * retornaConceito(float nota, int qtdFaltas);

int main()
{
	float nota;
	int qtdFaltas;

	nota = lerNota();
	qtdFaltas = lerQuantidadeDeFaltas();
	
	exibeResultadoDoAluno(nota, qtdFaltas);
	
	return EXIT_SUCCESS;
}

float lerNota()
{
	float nota;

	do
	{
		printf("Digite a nota do aluno: "); scanf("%f", &nota);

		if (!validaNota(nota))
		{
			printf("Erro! nota digitada invalida!\n");
			printf("Tente novamente.\n\n");
		}
	}
	while (!validaNota(nota));

	return nota;
}

bool validaNota(float nota)
{
	return (nota >= 0 && nota <= 10);
}

int lerQuantidadeDeFaltas()
{
	int quantidadeDeFaltas;

	do
	{
		printf("Informe a quantas vezes o aluno faltou: "); scanf("%d", &quantidadeDeFaltas);

		if (!validaQuantidadeDeFaltas(quantidadeDeFaltas))
		{
			printf("Erro! nota digitada invalida!\n");
			printf("Tente novamente.\n\n");
		}
	}
	while (!validaQuantidadeDeFaltas(quantidadeDeFaltas));

	return quantidadeDeFaltas;
}

bool validaQuantidadeDeFaltas(int quantidadeDeFaltas)
{
	return (quantidadeDeFaltas >= 0);
}

void exibeResultadoDoAluno(float nota, int qtdFaltas)
{
	printf("\nNota do aluno: %.2f\n", nota);
	printf("Faltas: %d\n", qtdFaltas);
	printf("O aluno %s mais de 20 faltas.\n", (qtdFaltas > 20) ? "tem" : "nao tem");
	printf("O conceito do aluno eh: %s.\n", retornaConceito(nota, qtdFaltas));
}

char * retornaConceito(float nota, int qtdFaltas)
{
	const char* conceito;
	bool possuiMaisDe20Faltas;

	possuiMaisDe20Faltas = (qtdFaltas > 20);
	
	if (!possuiMaisDe20Faltas)
	{
		if (nota >= 9.0 && nota <= 10.0)
			conceito = "A";
		else if (nota >= 7.5 && nota <= 8.9)
			conceito = "B";
		else if (nota >= 5.0 && nota <= 7.4)
			conceito = "C";
		else if (nota >= 4.0 && nota <= 4.9)
			conceito = "D";
		else
			conceito = "E";
	}
	else
	{
		if (nota >= 9.0 && nota <= 10.0)
			conceito = "B";
		else if (nota >= 7.5 && nota <= 8.9)
			conceito = "C";
		else if (nota >= 5.0 && nota <= 7.4)
			conceito = "D";
		else
			conceito = "E";
	}

	return conceito;
}
