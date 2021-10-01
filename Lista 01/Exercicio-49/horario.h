#ifndef _INC_STDIO
    #include <stdio.h>
#endif

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
