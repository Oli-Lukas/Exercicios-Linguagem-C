/**
 * 32. Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete
 *     e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche. Considere
 *     que a cada execução somente será calculado um pedido. O cardápio da lanchonete segue o
 *     padrão abaixo:
 * 
 *     ESPECIFICACAO		CÓDIGO		PREÇO
 * 	   Cachorro Quente		100			1.20
 * 	   Bauru Simples		101			1.30
 * 	   Bauru com Ovo		102			1.50
 * 	   Hamburguer			103			1.20
 * 	   Cheeseburguer		104			1.70
 * 	   Suco					105			2.20
 * 	   Refrigerante			106			1.00
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define Nomes
#define NOME_CODIGO_100 "Cachorro Quente"
#define NOME_CODIGO_101 "Bauro Simples"
#define NOME_CODIGO_102 "Bauro com Ovo"
#define NOME_CODIGO_103 "Hamburguer"
#define NOME_CODIGO_104 "Cheeseburguer"
#define NOME_CODIGO_105 "Suco"
#define NOME_CODIGO_106 "Refrigerante"

// Define Preços
#define PRECO_CODIGO_100 1.20
#define PRECO_CODIGO_101 1.30
#define PRECO_CODIGO_102 1.50
#define PRECO_CODIGO_103 1.20
#define PRECO_CODIGO_104 1.70
#define PRECO_CODIGO_105 2.20
#define PRECO_CODIGO_106 1.00

void exibeTabelaDeProdutos();
int lerCodigo();
bool codigoValido(int codigo);
int lerQuantidade();
bool quantidadeValida(int quantidade);
float calculaPreco(int codigo, int quantidade);
void exibeResultadoPedido(int codigo, int quantidade, float precoFinal);
char * retornaNomeDoProduto(int codigo);

int main()
{
	int codigo, quantidade;
	float precoFinal;

	codigo     = lerCodigo();
	quantidade = lerQuantidade();

	precoFinal = calculaPreco(codigo, quantidade);
	exibeResultadoPedido(codigo, quantidade, precoFinal);
	
	return EXIT_SUCCESS;
}

void exibeTabelaDeProdutos()
{
	printf("#################################################\n");
	printf("# Cachorro Quente - Codigo 100 - Preco R$ 1.20  #\n");
	printf("# Bauru Simples   - Codigo 101 - Preco R$ 1.30  #\n");
	printf("# Bauru com Ovo   - Codigo 102 - Preco R$ 1.50  #\n");
	printf("# Hamburguer      - Codigo 103 - Preco R$ 1.20  #\n");
	printf("# Cheeseburguer   - Codigo 104 - Preco R$ 1.70  #\n");
	printf("# Suco            - Codigo 105 - Preco R$ 2.20  #\n");
	printf("# Refrigerante    - Codigo 106 - Preco R$ 1.00  #\n");
	printf("#################################################\n\n");
}

int lerCodigo()
{
	int codigo;

	do
	{
		exibeTabelaDeProdutos();

		printf("Digite o codigo equivalente ao produto que deseja: "); scanf("%d", &codigo);

		if (!codigoValido(codigo))
		{
			printf("Erro! O codigo digitado nao e valido!\n");
			printf("Tente novamente.\n\n");
		}
	}
	while (!codigoValido(codigo));

	return codigo;
}

bool codigoValido(int codigo)
{
	return (codigo >= 100 && codigo <= 106);
}

int lerQuantidade()
{
	int quantidade;

	do
	{
		printf("Digite a quantidade que deseja: "); scanf("%d", &quantidade);

		if (!quantidadeValida(quantidade))
		{
			printf("Erro! O quantidade digitado nao e valido!\n");
			printf("Tente novamente.\n\n");
		}
	}
	while (!quantidadeValida(quantidade));

	return quantidade;
}

bool quantidadeValida(int quantidade)
{
	return (quantidade > 0);
}

float calculaPreco(int codigo, int quantidade)
{
	float preco = 0.0;

	switch (codigo)
	{
		case 100:
			preco = PRECO_CODIGO_100 * quantidade;
			break;
		case 101:
			preco = PRECO_CODIGO_101 * quantidade;
			break;
		case 102:
			preco = PRECO_CODIGO_102 * quantidade;
			break;
		case 103:
			preco = PRECO_CODIGO_103 * quantidade;
			break;
		case 104:
			preco = PRECO_CODIGO_104 * quantidade;
			break;
		case 105:
			preco = PRECO_CODIGO_105 * quantidade;
			break;
		case 106:
			preco = PRECO_CODIGO_106 * quantidade;
			break;
	}

	return preco;
}

void exibeResultadoPedido(int codigo, int quantidade, float precoFinal)
{
	printf("\n%02d unidade(s) de %s: R$ %.2f\n", quantidade, retornaNomeDoProduto(codigo), precoFinal);
}

char * retornaNomeDoProduto(int codigo)
{
	const char *nome;

	switch (codigo)
	{
		case 100:
			nome = NOME_CODIGO_100;
			break;
		case 101:
			nome = NOME_CODIGO_101;
			break;
		case 102:
			nome = NOME_CODIGO_102;
			break;
		case 103:
			nome = NOME_CODIGO_103;
			break;
		case 104:
			nome = NOME_CODIGO_104;
			break;
		case 105:
			nome = NOME_CODIGO_105;
			break;
		case 106:
			nome = NOME_CODIGO_106;
			break;
	}

	return nome;
}

#undef PRECO_CODIGO_100
#undef PRECO_CODIGO_101
#undef PRECO_CODIGO_102
#undef PRECO_CODIGO_106
#undef PRECO_CODIGO_103
#undef PRECO_CODIGO_104
#undef PRECO_CODIGO_105

#undef NOME_CODIGO_100
#undef NOME_CODIGO_101
#undef NOME_CODIGO_102
#undef NOME_CODIGO_103
#undef NOME_CODIGO_104
#undef NOME_CODIGO_105
#undef NOME_CODIGO_106
