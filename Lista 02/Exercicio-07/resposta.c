/**
 * 7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima
 *    a mensagem Números iguais.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float lerNumero(const char *ordem);
bool eIgual(float num1, float num2);
float retornaMaiorNumero(float num1, float num2);
void exibeResultado(bool numerosIguais, float maior);

int main()
{
	float numero1, numero2, maior;
	
	numero1 = lerNumero("primeiro");
	numero2 = lerNumero("segundo");

	if (!eIgual(numero1, numero2)) maior = retornaMaiorNumero(numero1, numero2);

	exibeResultado(eIgual(numero1, numero2), maior);

	return EXIT_SUCCESS;
}

float lerNumero(const char *ordem)
{
	float numero;

	printf("Digite o %s numero: ", ordem); scanf("%f", &numero);

	return numero;
}

bool eIgual(float num1, float num2)
{
	return (num1 == num2);
}

float retornaMaiorNumero(float num1, float num2)
{
	return (num1 > num2) ? num1 : num2;
}

void exibeResultado(bool numerosIguais, float maior)
{
	if (!numerosIguais) printf("O maior numero digitado foi %f.\n", maior);
	else                printf("Numeros iguais.\n");
}
