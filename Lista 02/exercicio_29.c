/**
 * 29. Faça uma prova de matemática para crianças que estão aprendendo a somar números
 *     inteiros menores do que 100. Escolha números aleatórios entre 1 e 100, e mostre na
 *     tela a pergunta: qual é a soma de a + b, onde a e b são os números aleatórios. Peça a
 *     resposta. Faça cinco perguntas ao aluno, e mostre para ele as perguntas e as respostas
 *     corretas, além de quantas vezes o aluno acertou.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int geraNumeroAleatorio(int valorInicial, int valorFinal);
bool perguntaUsuario();

int main()
{
	srand(time(NULL));

	prova();

	return EXIT_SUCCESS;
}

int geraNumeroAleatorio(int valorInicial, int valorFinal)
{
	return (valorInicial + rand() % valorFinal);
}

bool perguntaUsuario()
{
	int num1, num2, resposta;

	num1 = geraNumeroAleatorio(1, 100);
	num2 = geraNumeroAleatorio(1, 100);

	printf("%d + %d = ", num1, num2); scanf("%d", &resposta);
	printf("Resposta Correta: %d.\n\n", num1 + num2);

	return (resposta == (num1 + num2));
}

int prova()
{
	bool acertou;
	int acertos = 0;

	for (int count = 0; count < 5; count++)
	{
		acertou = perguntaUsuario();

		if (acertou)
			acertos++;
	}

	printf("Voce acertou %d de 5.\n", acertos);
}