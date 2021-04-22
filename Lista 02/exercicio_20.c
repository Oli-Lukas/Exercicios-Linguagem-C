/**
 * 20. Dados três valores, A, B, C, Verificar se eles podem ser valores dos lados de um triângulo e,
 *     se forem, se é um triângulo escaleno, equilátero ou isóscele, considerando os seguintes conceitos:
 *     
 *     * O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
 *     * Chama-se equilátero o triângulo que tem três lados iguais.
 *     * Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais.
 *     * Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool eTriangulo(float ladoA, float ladoB, float ladoC);
bool verificaLados(float ladoPrincipal, float soma);
bool eTrianguloEquilatero(float ladoA, float ladoB, float ladoC);
bool eTrianguloIsocele(float ladoA, float ladoB, float ladoC);
void lerLados(float *a, float *b, float *c);
const char * devolveClassificacao(float a, float b, float c);

int main()
{
	float ladoA, ladoB, ladoC;

	lerLados(&ladoA, &ladoB, &ladoC);
	printf("Classificacao: %s.\n", devolveClassificacao(ladoA, ladoB, ladoC));

	return EXIT_SUCCESS;
}

bool eTriangulo(float ladoA, float ladoB, float ladoC)
{
	bool validaLadoA, validaLadoB, validaLadoC;

	validaLadoA = verificaLados(ladoA, ladoB + ladoC);
	validaLadoB = verificaLados(ladoB, ladoA + ladoC);
	validaLadoC = verificaLados(ladoC, ladoA + ladoB);

	if (validaLadoA && validaLadoB && validaLadoC)
		return true;
	else
		return false;
}

bool verificaLados(float ladoPrincipal, float soma)
{
	return (ladoPrincipal < soma) ? true : false;
}

bool eTrianguloEquilatero(float ladoA, float ladoB, float ladoC)
{
	return (ladoA == ladoB && ladoB == ladoC) ? true : false;
}

bool eTrianguloIsocele(float ladoA, float ladoB, float ladoC)
{
	return ((ladoA == ladoB) || (ladoB == ladoC) || (ladoA == ladoC)) ? true : false;
}

void lerLados(float *a, float *b, float *c)
{
	do
	{
		printf("Digite o tamanho do lado a: "); scanf("%f", a);
	}
	while (*a <= 0);
	do
	{
		printf("Digite o tamanho do lado b: "); scanf("%f", b);
	}
	while (*b <= 0);
	do
	{
		printf("Digite o tamanho do lado c: "); scanf("%f", c);
	}
	while (*c <= 0);
}

const char * devolveClassificacao(float a, float b, float c)
{
	if (eTriangulo(a, b, c))
	{
		if (eTrianguloEquilatero(a, b, c))
			return "Triangulo Equilatero";
		else if (eTrianguloIsocele(a, b, c))
			return "Triangulo Isoscele";
		else
			return "Triangulo Escaleno";
	}
	else
		return "Nao eh triangulo";
}