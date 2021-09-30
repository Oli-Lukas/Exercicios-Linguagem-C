/**
 * 10. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as
 *     seguintes fórmulas (onde h corresponde à altura):
 *     * - Homens: (72.7 * h) - 58;
 *     * - Mulheres: (62.1 * h) - 44.7
 **/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char sexo;
	float altura, pesoIdeal;

	printf("Entre com a altura da pessoa: "); scanf("%f", &altura); fflush(stdin);
	printf("Informe o sexo da pessoa (M - masculino, F - feminino): "); scanf("%c", &sexo);
	
	if (isalpha(sexo) && toupper(sexo) == 'M')
		pesoIdeal = (72.7 * altura) - 58;
	else if (isalpha(sexo) && toupper(sexo) == 'F')
		pesoIdeal = (62.1 * altura) - 44.7;
	
	printf("O peso ideal para voce e %.2f.\n", pesoIdeal);

	return EXIT_SUCCESS;
}
