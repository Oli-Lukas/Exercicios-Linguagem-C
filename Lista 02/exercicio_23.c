/**
 * 23. Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se
 *     for divisível por 400 ou se for divisível por 4 e não for divisível 100.
 *     Por exemplo:
 *     1988, 1992, 1996.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool eBissexto(int ano);
bool eDivisivelPor(int numero, int supostoDivisor);

int main()
{
	int ano;

	printf("Digite um ano no formato inteiro: "); scanf("%d", &ano);

	printf("O ano digitado %s bissexto!\n", eBissexto(ano) ? "eh" : "nao eh");

	return EXIT_SUCCESS;
}

bool eBissexto(int ano)
{
	if (eDivisivelPor(ano, 400))
		return true;
	
	bool divisivelPor4, divisivelPor100;

	divisivelPor4 	= eDivisivelPor(ano, 4);
	divisivelPor100	= eDivisivelPor(ano, 100);

	if (divisivelPor4 && !divisivelPor100)
		return true;
	else
		return false;
}

bool eDivisivelPor(int numero, int supostoDivisor)
{
	return (numero % supostoDivisor == 0) ? true : false;
}