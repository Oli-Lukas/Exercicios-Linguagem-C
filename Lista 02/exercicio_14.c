/**
 * 14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10,
 *     respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três
 *     notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação Semestral: 3;
 *     Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9),
 *     de recuperação (entre 3 e 4,9) ou se foi aprovado. Faça todas as verificações necessárias.
 **/

#include <stdio.h>
#include <stdlib.h>

#define PESO_TRABALHO_DE_LABORATORIO 2.0
#define PESO_AVALIACAO_SEMESTRAL 3.0
#define PESO_EXAME_FINAL 5.0

int main()
{
	float notaTrabalhoDeLaboratorio, notaAvaliacaoSemestral, notaExameFinal;
	float mediaPonderada;

	printf("Informe a nota do aluno no Trabalho de Laboratorio (0 a 10): "); scanf("%f", &notaTrabalhoDeLaboratorio);
	printf("Informe a nota do aluno na Avaliacao Semestral (0 a 10)    : "); scanf("%f", &notaAvaliacaoSemestral);
	printf("Informe a nota do aluno no Exame Final (0 a 10)            : "); scanf("%f", &notaExameFinal);

	mediaPonderada = ((notaTrabalhoDeLaboratorio * PESO_TRABALHO_DE_LABORATORIO) + 
					  (notaAvaliacaoSemestral * PESO_AVALIACAO_SEMESTRAL) + 
					  (notaExameFinal * PESO_EXAME_FINAL)) / (PESO_TRABALHO_DE_LABORATORIO + PESO_AVALIACAO_SEMESTRAL + PESO_EXAME_FINAL);
	
	if (mediaPonderada >= 0 && mediaPonderada <= 2.9)
		printf("O aluno foi reprovado.\n");
	else if (mediaPonderada >= 3 && mediaPonderada <= 4.9)
		printf("O aluno esta de recuperacao.\n");
	else
		printf("O aluno foi aprovado.\n");
	
	printf("Nota Final = %.2f.\n", mediaPonderada);
	
	return EXIT_SUCCESS;
}

#undef PESO_TRABALHO_DE_LABORATORIO
#undef PESO_AVALIACAO_SEMESTRAL
#undef PESO_EXAME_FINAL
