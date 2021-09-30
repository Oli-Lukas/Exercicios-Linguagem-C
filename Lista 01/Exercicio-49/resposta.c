/**
 * 49. Faça um programa para ler o horário (hora, minuto e segundo)
 *     de inicio e a duração, em segundos, de uma experiência
 *     biológica. O programa deve resultar com o novo horário
 *     (hora, minuto e segundo) do término da mesma. 
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define VALOR_MINIMO_SEGUNDO 0
#define VALOR_MAXIMO_SEGUNDO 59

#define VALOR_MINIMO_MINUTO 0
#define VALOR_MAXIMO_MINUTO 59

#define VALOR_MINIMO_HORA 0
#define VALOR_MAXIMO_HORA 23

struct Horario
{
    int hora;
    int minuto;
    int segundo;
};

typedef struct Horario Horario;

int  lerHora();
bool validaHora(int hora);
void mensagemHoraInvalida();

int  lerMinuto();
bool validaMinuto(int minuto);
void mensagemMinutoInvalido();

int  lerSegundo();
bool validaSegundo(int segundo);
void mensagemSegundoInvalido();

int  lerDuracaoSegundos();
bool validaDuracao(int duracao);
void mensagemDuracaoInvalida();

Horario calculaNovoHorario(Horario horario_base, int duracao_segundos);
void    exibeHorario(Horario horario, const char *rotulo_horario);

int main()
{
    Horario horario_inicial;
    Horario horario_final;
    int duracao_segundos;

    horario_inicial.hora    = lerHora();
    horario_inicial.minuto  = lerMinuto();
    horario_inicial.segundo = lerSegundo();
    duracao_segundos        = lerDuracaoSegundos();

    horario_final = calculaNovoHorario(horario_inicial, duracao_segundos);
    putchar('\n');

    exibeHorario(horario_inicial, "Horario Inicial");
    exibeHorario(horario_final  , "Horario Final");
    
    return EXIT_SUCCESS;
}

int lerHora()
{
    int  hora;
    bool flag;

    flag = false;

    do
    {
        printf("Digite a hora em que o experimento iniciara: "); scanf("%d", &hora);

        if (!validaHora(hora)) mensagemHoraInvalida();
        else                   flag = true;
    }
    while (!flag);

    return hora;
}

bool validaHora(int hora)
{
    return (hora >= 0 && hora <= VALOR_MAXIMO_HORA);
}

void mensagemHoraInvalida()
{
    printf("A hora fornecida eh invalida.\n");
    printf("Por favor! Digite um valor entre 0 e 23.\n\n");
}

int lerMinuto()
{
    int  minuto;
    bool flag;

    flag = false;

    do
    {
        printf("Digite o minuto em que o experimento iniciara: "); scanf("%d", &minuto);
        
        if (!validaMinuto(minuto)) mensagemMinutoInvalido();
        else                       flag = true;
    }
    while (!flag);

    return minuto;
}

bool validaMinuto(int minuto)
{
    return (minuto >= 0 && minuto <= VALOR_MAXIMO_MINUTO);
}

void mensagemMinutoInvalido()
{
    printf("O minuto fornecido eh invalido.\n");
    printf("Por favor! Digite um valor entre 0 e 59.\n\n");
}

int lerSegundo()
{
    int segundo;
    bool flag;

    flag = false;

    do
    {
        printf("Digite o segundo em que o experimento iniciara: "); scanf("%d", &segundo);

        if (!validaSegundo(segundo)) mensagemSegundoInvalido();
        else                         flag = true;
    }
    while (!flag);

    return segundo;
}

bool validaSegundo(int segundo)
{
    return (segundo >= 0 && segundo <= VALOR_MAXIMO_SEGUNDO);
}

void mensagemSegundoInvalido()
{
    printf("O segundo fornecido eh invalido.\n");
    printf("Por favor! Digite um valor entre 0 e 59.\n\n");
}

int lerDuracaoSegundos()
{
    int duracao_segundos;
    bool flag;

    flag = false;

    do
    {
        printf("Digite quantos segundos o experimento deve durar: "); scanf("%d", &duracao_segundos);

        if (!validaDuracao(duracao_segundos)) mensagemDuracaoInvalida();
        else                                  flag = true;
    }
    while (!flag);

    return duracao_segundos;
}

bool validaDuracao(int duracao)
{
    return (duracao > 0);
}

void mensagemDuracaoInvalida()
{
    printf("A duracao fornecida eh invalida.\n");
    printf("Por favor! Digite um valor maior do que 0.\n\n");
}

Horario calculaNovoHorario(Horario horario_base, int duracao_segundos)
{
    Horario novo_horario = horario_base;

    while (duracao_segundos-- > 0)
    {
        novo_horario.segundo++;

        if (novo_horario.segundo > VALOR_MAXIMO_SEGUNDO)
        {
            novo_horario.minuto++;
            novo_horario.segundo = 0;
        }

        if (novo_horario.minuto > VALOR_MAXIMO_MINUTO)
        {
            novo_horario.hora++;
            novo_horario.minuto = 0;
        }

        if (novo_horario.hora > VALOR_MAXIMO_HORA) novo_horario.hora = 0;
    }

    return novo_horario;
}

void exibeHorario(Horario horario, const char *rotulo_horario)
{
    printf("\t%s\n", rotulo_horario);
    printf("Hora   : %02d\n", horario.hora);
    printf("Minuto : %02d\n", horario.minuto);
    printf("Segundo: %02d\n", horario.segundo);
    printf("\n");
}

#undef VALOR_MINIMO_SEGUNDO
#undef VALOR_MAXIMO_SEGUNDO

#undef VALOR_MINIMO_MINUTO
#undef VALOR_MAXIMO_MINUTO

#undef VALOR_MINIMO_HORA
#undef VALOR_MAXIMO_HORA