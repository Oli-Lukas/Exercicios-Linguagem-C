/**
 * 48. Leia um valor inteiro em segundos, e imprima-o em 
 *     horas, minutos e segundos. 
 **/

#include <stdio.h>
#include <stdlib.h>

#define QUANTIDADE_SEGUNDOS_HORAS 3600
#define QUANTIDADE_SEGUNDOS_MINUTOS 60

int segundosEmHoras(int *segundos);
int segundosEmMinutos(int *segundos);

int main()
{
    int quantidade_segundos, horas, minutos, segundos;

    printf("Digite uma quantidade de segundos: "); scanf("%d", &quantidade_segundos);

    horas    = segundosEmHoras(&quantidade_segundos);
    minutos  = segundosEmMinutos(&quantidade_segundos);
    segundos = quantidade_segundos;

    printf("%d segundos equivale a %d horas, %d minutos e %d segundos.", quantidade_segundos, horas, minutos, segundos);
    
    return EXIT_SUCCESS;
}

int segundosEmHoras(int *segundos)
{
    int horas;

    horas     = (*segundos) / QUANTIDADE_SEGUNDOS_HORAS;
    *segundos -= horas * QUANTIDADE_SEGUNDOS_HORAS;

    return horas;
}

int segundosEmMinutos(int *segundos)
{
    int minutos;

    minutos   = (*segundos) / QUANTIDADE_SEGUNDOS_MINUTOS;
    *segundos -= minutos * QUANTIDADE_SEGUNDOS_MINUTOS;

    return minutos;
}

#undef QUANTIDADE_SEGUNDOS_HORAS
#undef QUANTIDADE_SEGUNDOS_MINUTOS