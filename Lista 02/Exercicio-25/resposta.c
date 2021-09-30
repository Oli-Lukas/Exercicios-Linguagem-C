/**
 * 25. Calcule as raízes da equação de 2º grau.
 *     
 *     ax² + bx + c = 0 representa uma equação de 2º grau.
 *     
 *     A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem
 *     "Não é equação de segundo grau".
 *     
 *     * Se delta < 0, não existe real. Imprima a mensagem Não existe raiz.
 *     * Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz única.
 *     * Se delta > 0, imprima as duas raízes reais.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void lerValores(float *valorA, float *valorB, float *valorC);
float calculaDelta(float a, float b, float c);
void calculaRaizes(float *r1, float *r2, float a, float b, float delta);

int main()
{
	float a, b, c, delta;
	float raiz1, raiz2;
	bool existeRaizReal;

	lerValores(&a, &b, &c);
	delta = calculaDelta(a, b, c);
	existeRaizReal = (delta >= 0) ? true : false;

	if (existeRaizReal)
	{
		calculaRaizes(&raiz1, &raiz2, a, b, delta);
		printf("Primeira raiz: %.2f\n", raiz1);
		printf("Segunda raiz: %.2f\n", raiz2);
	}
	else
		printf("Nao existe raizes reais para esta equacao.\n");

	return EXIT_SUCCESS;
}

void lerValores(float *valorA, float *valorB, float *valorC)
{
	printf("Digite um valor para A: "); scanf("%f", valorA);
	printf("Digite um valor para B: "); scanf("%f", valorB);
	printf("Digite um valor para C: "); scanf("%f", valorC);
}

float calculaDelta(float a, float b, float c)
{
	float delta;

	delta = (b * b) - 4 * a * c;

	return delta;
}

void calculaRaizes(float *r1, float *r2, float a, float b, float delta)
{
	*r1 = (-b + sqrt(delta)) / 2*a;
	*r2 = (-b - sqrt(delta)) / 2*a;
}