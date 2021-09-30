/**
 * 13. Faça um algoritmo que calcule a média ponderada das notas
 *     de 3 provas. A primeira e a segunda prova têm peso 1 e a
 *     terceira tem peso 2. Ao final, mostrar a média do aluno
 *     e indicar se o aluno foi aprovado ou reprovado. A nota para
 *     aprovação deve ser igual ou superior a 60 pontos.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NOTA_MINIMA_PARA_APROVACAO 60

float lerNota(const char *ordemDaNota);
bool eNotaValida(float nota);
void exibeResultado(float media);
float calculaMedia(float nota1, float nota2, float nota3);

int main()
{
	float nota1, nota2, nota3, media;

	nota1 = lerNota("primeira");
	nota2 = lerNota("segunda");
	nota3 = lerNota("terceira");

	media = calculaMedia(nota1, nota2, nota3);
	exibeResultado(media);
	
	return EXIT_SUCCESS;
}

float lerNota(const char *ordemDaNota)
{
	float nota;

	do
	{
		printf("Digite a %s nota (entre 0 e 100): ", ordemDaNota); scanf("%f", &nota);
	
		if (!eNotaValida(nota))
		{
			printf("Nota digitada invalida!\n");
			printf("Digite uma nota entre 0 e 100.\n\n");
		}
	}
	while(!eNotaValida(nota));

	return nota;
}

bool eNotaValida(float nota)
{
	return (nota >= 0 && nota <= 100);
}

void exibeResultado(float media)
{
	printf("Media ponderada = %.2f.\n", media);

	if (media >= NOTA_MINIMA_PARA_APROVACAO)
		printf("Aluno Aprovado.\n");
	else
		printf("Aluno Reprovado.\n");
}

float calculaMedia(float nota1, float nota2, float nota3)
{
	return (nota1 + nota2 + (nota3 * 2)) / 4.0;
}

#undef NOTA_MINIMA_PARA_APROVACAO