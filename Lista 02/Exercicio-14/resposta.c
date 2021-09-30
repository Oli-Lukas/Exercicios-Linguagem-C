/**
 * 14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10,
 *     respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três
 *     notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3;
 *     Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9),
 *     de recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define PESO_TRABALHO_DE_LABORATORIO 2.0
#define PESO_AVALIACAO_SEMESTRAL 3.0
#define PESO_EXAME_FINAL 5.0

float lerNotaDoAluno(const char *tipoDeAvaliacao);
bool eNotaValida(float nota);
float calculaMediaPonderada(float trabalhoDeLaboratorio, float avaliacaoSemestral, float exameFinal);
void exibeResultado(float media);

int main()
{
	float notaTrabalhoDeLaboratorio, notaAvaliacaoSemestral, notaExameFinal;
	float mediaPonderada;

	notaTrabalhoDeLaboratorio = lerNotaDoAluno("Trabalho de Laboratorio");
	notaAvaliacaoSemestral = lerNotaDoAluno("Avaliacao Semestral");
	notaExameFinal = lerNotaDoAluno("Exame Final");

	mediaPonderada = calculaMediaPonderada(notaTrabalhoDeLaboratorio, notaAvaliacaoSemestral, notaExameFinal);

	exibeResultado(mediaPonderada);
	
	return EXIT_SUCCESS;
}

float lerNotaDoAluno(const char *tipoDeAvaliacao)
{
	float nota;

	do
	{
		printf("Informe a nota do aluno no(a) %s (0 a 10): ", tipoDeAvaliacao); scanf("%f", &nota);

		if (!eNotaValida(nota))
		{
			printf("Nota digitada invalida!\n");
			printf("Digite um numero entre 0 e 10.\n\n");
		}
	}
	while (!eNotaValida(nota));

	return nota;
}

bool eNotaValida(float nota)
{
	return (nota >= 0 && nota <= 10);
}

float calculaMediaPonderada(float trabalhoDeLaboratorio, float avaliacaoSemestral, float exameFinal)
{
	float media;

	media = ((trabalhoDeLaboratorio * PESO_TRABALHO_DE_LABORATORIO) +
			 (avaliacaoSemestral * PESO_AVALIACAO_SEMESTRAL) +
			 (exameFinal * PESO_EXAME_FINAL)) / (PESO_TRABALHO_DE_LABORATORIO + PESO_AVALIACAO_SEMESTRAL + PESO_EXAME_FINAL);
	
	return media;
}

void exibeResultado(float media)
{
	if (media <= 2.9)
		printf("O aluno foi reprovado.\n");
	else if (media >= 3 && media <= 4.9)
		printf("O aluno esta de recuperacao.\n");
	else
		printf("O aluno foi aprovado.\n");

	printf("Nota Final = %.2f.\n", media);
}

#undef PESO_TRABALHO_DE_LABORATORIO
#undef PESO_AVALIACAO_SEMESTRAL
#undef PESO_EXAME_FINAL
