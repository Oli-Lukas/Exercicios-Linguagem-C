/**
 * 8. Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média
 *    destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não
 *    possua um valor válido, este fato deve ser informado ao usuário e o programa termina.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota1, nota2, media;

	printf("Digite a primeira nota: "); scanf("%f", &nota1);
	if (nota1 < 0 || nota1 > 10)
	{
		printf("A nota digitada e invalida.\n");
		return EXIT_FAILURE;
	}

	printf("Digite a segunda nota : "); scanf("%f", &nota2);
	if (nota2 < 0 || nota2 > 10)
	{
		printf("A nota digitada e invalida.\n");
		return EXIT_FAILURE;
	}

	media = (nota1 + nota2) / 2.0;
	printf("A media das notas digitadas e %.2f.\n", media);

	return EXIT_SUCCESS;
}
