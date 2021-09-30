/**
 * 35. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12
 *     e se o dia existe naquele mês. Note que Feveiro tem 29 dias em anos bissextos, e 28
 *     dias em anos não bissextos.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define QUANTIDADE_DE_DIAS_FEVEREIRO_BISSEXTO 29
#define QUANTIDADE_DE_DIAS_FEVEREIRO_NAO_BISSEXTO 28
#define DIA_INICIAL_PADRAO 1
#define DIA_FINAL_PADRAO_MES_30_DIAS 30
#define DIA_FINAL_PADRAO_MES_31_DIAS 31

bool eBissexto(int ano);
bool eDivisivelPor(int numero, int supostoDivisor);
bool validaData(int dia, int mes, int ano);
bool validaAno(int ano);
bool validaMes(int mes);
bool validaDia(int dia, int mes, bool eAnoBissexto);
bool mesCom30Dias(int mes);
bool mesCom31Dias(int mes);
bool estaNoIntervalo(int alvo, int valorInicial, int valorFinal);

enum mesesDoAno
{
	JANEIRO = 1,
	FEVEREIRO,
	MARCO,
	ABRIL,
	MAIO,
	JUNHO,
	JULHO,
	AGOSTO,
	SETEMBRO,
	OUTUBRO,
	NOVEMBRO,
	DEZEMBRO
};

int main()
{
	bool dataValida;
	int ano, mes, dia;

	printf("Digite uma data (dia/mes/ano_completo): "); scanf("%d/%d/%d", &dia, &mes, &ano);

	dataValida = validaData(dia, mes, ano);
	printf("A data informada %s valida.\n", (dataValida) ? "eh" : "nao eh");
	
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

bool validaData(int dia, int mes, int ano)
{
	bool diaValido, mesValido, anoValido;

	anoValido = validaAno(ano);
	mesValido = validaMes(mes);
	diaValido = validaDia(dia, mes, eBissexto(ano));

	return (diaValido && mesValido && anoValido);
}

bool validaAno(int ano)
{
	return (ano > 0);
}

bool validaMes(int mes)
{
	return (mes >= 1 && mes <= 12);
}

bool validaDia(int dia, int mes, bool eAnoBissexto)
{
	bool diaValido = false;

	if (mes == FEVEREIRO)
	{
		if (eAnoBissexto)
			diaValido = estaNoIntervalo(dia, DIA_INICIAL_PADRAO, QUANTIDADE_DE_DIAS_FEVEREIRO_BISSEXTO);
		else
			diaValido = estaNoIntervalo(dia, DIA_INICIAL_PADRAO, QUANTIDADE_DE_DIAS_FEVEREIRO_NAO_BISSEXTO);
	}
	else if (mesCom30Dias(mes))
		diaValido = estaNoIntervalo(dia, DIA_INICIAL_PADRAO, DIA_FINAL_PADRAO_MES_30_DIAS);
	else if (mesCom31Dias(mes))
		diaValido = estaNoIntervalo(dia, DIA_INICIAL_PADRAO, DIA_FINAL_PADRAO_MES_31_DIAS);
	
	return diaValido;
}

bool mesCom30Dias(int mes)
{
	bool eMesCom30Dias;

	eMesCom30Dias = ((mes == ABRIL)    ||
					 (mes == JUNHO)    ||
					 (mes == SETEMBRO) ||
					 (mes == NOVEMBRO));
	
	return eMesCom30Dias;
}

bool mesCom31Dias(int mes)
{
	bool eMesCom31Dias;

	eMesCom31Dias = ((mes == JANEIRO) ||
					 (mes == MARCO)   ||
					 (mes == MAIO)    ||
					 (mes == JULHO)   ||
					 (mes == AGOSTO)  ||
					 (mes == OUTUBRO) ||
					 (mes == DEZEMBRO));
	
	return eMesCom31Dias;
}

bool estaNoIntervalo(int alvo, int valorInicial, int valorFinal)
{
	return ((alvo >= valorInicial) && (alvo <= valorFinal));
}

#undef QUANTIDADE_DE_DIAS_FEVEREIRO_BISSEXTO
#undef QUANTIDADE_DE_DIAS_FEVEREIRO_NAO_BISSEXTO
#undef DIA_INICIAL_PADRAO
#undef DIA_FINAL_PADRAO_MES_30_DIAS
#undef DIA_FINAL_PADRAO_MES_31_DIAS
