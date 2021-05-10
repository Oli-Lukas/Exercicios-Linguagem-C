/**
 * 37. As tarifas de certo parque de estacionamento são as seguintes:
 * 
 *     * 1ª e 2ª hora - R$ 1,00 cada
 *     * 3ª e 4ª hora - E$ 1,40 cada
 *     * 5º hora e seguintes - R$ 2,00 cada
 * 
 *     O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem estacionar
 *     durantet 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse permanecido 120
 *     minutos. Os momentos de chegada ao parque e partida deste são apresentados na forma de pares
 *     inteiros, representando horas e minutos. Por exemplo, o par 12 50 representará "dez para a uma
 *     da tarde". Pretende-se criar um programa que, lidos pelo teclado os momentos de chegada e de
 *     partida, escreva na tela o preço cobrado pelo estacionamento. Admite-se que a chegada e a partida
 *     se dão com intervalo não superior a 24 horas. Portanto, se uma dada hora de chegada for superior
 *     à da partida, isso não é uma situação de erro, antes significará que a partida ocorreu no dia
 *     seguinte ao da chegada.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define COBRANCA_A 1.00
#define COBRANCA_B 1.40
#define COBRANCA_C 2.00
#define QTD_HORAS_NO_DIA 24
#define QTD_MINUTOS_EM_UMA_HORA 60

enum momentoStatus
{
	CHEGADA,
	PARTIDA
};

struct momento
{
	int hora;
	int minuto;
};

typedef enum momentoStatus MStatus;
typedef struct momento Momento;

void lerDados(Momento *ptrChegada, Momento *ptrPartida);
void lerMomento(Momento *ptrMomento, MStatus status);
bool validaMomento(Momento momento);
bool validaHora(int hora);
bool validaMinuto(int minuto);
void erroMomentoInvalido();
float calculaPrecoEstacionamento(Momento chegada, Momento partida);
int diferencaDeMomentosEmMinutos(Momento chegada, Momento partida);
int diferencaDeHoras(int horaChegada, int horaPartida);
bool partiuNoOutroDia(int horaChegada, int horaPartida);
int subtracaoDeMinutos(int minutoChegada, int minutoPartida);
int calculaHorasAPagar(int minutosEstacionado);
bool eDivisivelPor(int numero, int supostoDivisor);
float calculaValor(int horas);
float aplicaCobranca(int hora);
void exibeDadosDePagamento(Momento chegada, Momento partida, float pagamento);

int main()
{
	Momento chegada, partida;
	float precoEstacionamento;

	lerDados(&chegada, &partida);
	precoEstacionamento = calculaPrecoEstacionamento(chegada, partida);
	exibeDadosDePagamento(chegada, partida, precoEstacionamento);
	
	return EXIT_SUCCESS;
}

void lerDados(Momento *ptrChegada, Momento *ptrPartida)
{
	lerMomento(ptrChegada, CHEGADA);
	lerMomento(ptrPartida, PARTIDA);
}

void lerMomento(Momento *ptrMomento, MStatus status)
{
	const char* ptrMomentoStatusString;

	ptrMomentoStatusString = (status == CHEGADA) ? "chegada" : "partida";

	do
	{
		printf("Digite o momento da %s (hora:minuto): ", ptrMomentoStatusString);
		scanf("%d:%d", &ptrMomento->hora, &ptrMomento->minuto);

		if (!validaMomento(*ptrMomento))
			erroMomentoInvalido();
	}
	while(!validaMomento(*ptrMomento));
}

bool validaMomento(Momento momento)
{
	bool horaValida, minutoValido;

	horaValida   = validaHora(momento.hora);
	minutoValido = validaMinuto(momento.minuto);

	return (horaValida && minutoValido);
}

bool validaHora(int hora)
{
	return (hora >= 0 && hora <= 23);
}

bool validaMinuto(int minuto)
{
	return (minuto >= 0 && minuto <= 59);
}

void erroMomentoInvalido()
{
	printf("Erro! Momento informado pelo usuario invalido!\n");
	printf("Segue valores validos para momento:\n");
	printf("hora  : [0..23]\n");
	printf("minuto: [0..59]\n\n");
}

float calculaPrecoEstacionamento(Momento chegada, Momento partida)
{
	int minutosEstacionado, horasAPagar;
	float valor;

	minutosEstacionado = diferencaDeMomentosEmMinutos(chegada, partida);
	horasAPagar        = calculaHorasAPagar(minutosEstacionado);
	valor              = calculaValor(horasAPagar);	

	return valor;
}

int diferencaDeMomentosEmMinutos(Momento chegada, Momento partida)
{
	int diferencaHoras, diferencaMinutos;
	int diferencaTotalEmMinutos;
	
	diferencaHoras   = diferencaDeHoras(chegada.hora, partida.hora);
	diferencaMinutos = subtracaoDeMinutos(chegada.minuto, partida.minuto);

	diferencaTotalEmMinutos = (diferencaHoras * 60) + diferencaMinutos;

	return diferencaTotalEmMinutos;
}

int diferencaDeHoras(int horaChegada, int horaPartida)
{
	int diferenca = 0;

	if (!partiuNoOutroDia(horaChegada, horaPartida))
		diferenca = horaPartida - horaChegada;
	else
	{
		diferenca = QTD_HORAS_NO_DIA - horaChegada;
		diferenca += horaPartida;
	}

	return diferenca;
}

bool partiuNoOutroDia(int horaChegada, int horaPartida)
{
	return (horaPartida < horaChegada);
}

int subtracaoDeMinutos(int minutoChegada, int minutoPartida)
{
	return (minutoPartida - minutoChegada);
}

int calculaHorasAPagar(int minutosEstacionado)
{
	int horas;

	// Arredonda para o próximo múltiplo de 60.
	while (!eDivisivelPor(minutosEstacionado, QTD_MINUTOS_EM_UMA_HORA))
		minutosEstacionado++;
	
	horas = minutosEstacionado / 60;

	return horas;
}

bool eDivisivelPor(int numero, int supostoDivisor)
{
	return (numero % supostoDivisor == 0);
}

float calculaValor(int horas)
{
	float valor = 0.0;

	while (horas > 0)
	{
		valor += aplicaCobranca(horas);
		horas--;
	}

	return valor;
}

float aplicaCobranca(int hora)
{
	if (hora >= 5)
		return COBRANCA_C;
	else if (hora >= 3)
		return COBRANCA_B;
	else
		return COBRANCA_A;
}

void exibeDadosDePagamento(Momento chegada, Momento partida, float pagamento)
{
	printf("Chegada: %02d:%02d\n", chegada.hora, chegada.minuto);
	printf("Partida: %02d:%02d\n", partida.hora, partida.minuto);
	printf("Minutos estacionado: %d\n", diferencaDeMomentosEmMinutos(chegada, partida));
	printf("Horas a pagar: %d\n", calculaHorasAPagar(diferencaDeMomentosEmMinutos(chegada, partida)));
	printf("Pagamento: R$ %.2f\n", pagamento);
}

#undef COBRANCA_A
#undef COBRANCA_B
#undef COBRANCA_C
#undef QTD_HORAS_NO_DIA
#undef QTD_MINUTOS_EM_UMA_HORA
