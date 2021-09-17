/**
 * 49. Faça um programa para ler o horário (hora, minuto e segundo)
 *     de inicio e a duração, em segundos, de uma experiência
 *     biológica. O programa deve resultar com o novo horário
 *     (hora, minuto e segundo) do término da mesma. 
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora_inicial, minuto_inicial, segundo_inicial;
    int segundos, quantidade_horas, quantidade_minutos, quantidade_segundos;
    int hora_final, minuto_final, segundo_final;

    printf("Digite a hora em que o experimento iniciara: "); scanf("%d", &hora_inicial);
    printf("Digite o minuto em que o experimento iniciara: "); scanf("%d", &minuto_inicial);
    printf("Digite o segundo em que o experimento iniciara: "); scanf("%d", &segundo_inicial);
    printf("Digite quantos segundos o experimento deve durar: "); scanf("%d", &segundos);

    quantidade_horas = segundos / 3600;
    segundos -= quantidade_horas * 3600;
    quantidade_minutos = segundos / 60;
    segundos -= quantidade_minutos * 60;
    quantidade_segundos = segundos;

    hora_final = hora_inicial + quantidade_horas;
    minuto_final = minuto_inicial + quantidade_minutos;
    segundo_final = segundo_inicial + quantidade_segundos;
    if (segundo_final >= 60)
    {
        segundo_final -= 60;
        minuto_final++;
    }
    if (minuto_final >= 60)
    {
        minuto_final -= 60;
        hora_final++;
    }
    if (hora_final >= 24)
        hora_final -= 24;

    printf("Horario inicial: %02d:%02d:%02d\n", hora_inicial, minuto_inicial, segundo_inicial);
    printf("Horario Final: %02d:%02d:%02d\n", hora_final, minuto_final, segundo_final);
    
    return EXIT_SUCCESS;
}