/**
 * 8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média
 *    destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não
 *    possua um valor válido, este fato deve ser informado ao usuário e o programa termina.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NOTA_MINIMA 0.0
#define NOTA_MAXIMA 10.0

float lerNotaAluno(const char *ordem);
bool validaNota(float nota);
float calculaMedia(float n1, float n2);
void exibeMedia(float media);

int main()
{
	float nota1, nota2, media;

	nota1 = lerNotaAluno("primeira");
	nota2 = lerNotaAluno("segunda");

	media = calculaMedia(nota1, nota2);
	exibeMedia(media);

	return EXIT_SUCCESS;
}

float lerNotaAluno(const char *ordem)
{
	float nota;

	printf("Digite a %s nota: ", ordem); scanf("%f", &nota);
	if (!validaNota(nota))
	{
		printf("A nota digitada e invalida.\n");
		printf("Digite uma nota entre %.2f e %.2f.\n", NOTA_MINIMA, NOTA_MAXIMA);
		exit(EXIT_FAILURE);
	}

	return nota;
}

bool validaNota(float nota)
{
	return (nota >= NOTA_MINIMA && nota <= NOTA_MAXIMA);
}

float calculaMedia(float n1, float n2)
{
	float media;

	media = (n1 + n2) / 2.0;

	return media;
}

void exibeMedia(float media)
{
	printf("A media das notas digitadas eh %.2f.\n", media);
}

#undef NOTA_MINIMA
#undef NOTA_MAXIMA
