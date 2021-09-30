/**
 * 27. Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
 *     seguintes categorias:
 *     
 *     Categoria	Idade
 *     Infantil A	5 a 7
 *     Infantil B	8 a 10
 *     Juvenil A	11 a 13
 *     Juvenil B	14 a 17
 *     Sênior		maiores de 18 anos.
 **/

#include <stdio.h>
#include <stdlib.h>

char * retornaCategoria(int idade);

int main()
{
	int idade;

	printf("Digite a idade do nadador: "); scanf("%d", &idade);
	printf("Categoria do nadador: %s.\n", retornaCategoria(idade));
	
	return EXIT_SUCCESS;
}

char * retornaCategoria(int idade)
{
	if (idade >= 5 && idade <= 7)
		return "Infantil A";
	else if (idade >= 8 && idade <= 10)
		return "Infantil B";
	else if (idade >= 11 && idade <= 13)
		return "Juvenil A";
	else if (idade >= 14 && idade <= 17)
		return "Juvenil B";
	else if (idade >= 18)
		return "Senior";
}