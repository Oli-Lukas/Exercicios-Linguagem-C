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
    int horaInicial, minutoInicial, segundoInicial;
    int segundos, qtdHoras, qtdMinutos, qtdSegundos;
    int horaFinal, minutoFinal, segundoFinal;

    printf("Digite a hora em que o experimento iniciara: "); scanf("%d", &horaInicial);
    printf("Digite o minuto em que o experimento iniciara: "); scanf("%d", &minutoInicial);
    printf("Digite o segundo em que o experimento iniciara: "); scanf("%d", &segundoInicial);
    printf("Digite quantos segundos o experimento deve durar: "); scanf("%d", &segundos);

    qtdHoras = segundos / 3600;
    segundos -= qtdHoras * 3600;
    qtdMinutos = segundos / 60;
    segundos -= qtdMinutos * 60;
    qtdSegundos = segundos;

    horaFinal = horaInicial + qtdHoras;
    minutoFinal = minutoInicial + qtdMinutos;
    segundoFinal = segundoInicial + qtdSegundos;
    if (segundoFinal >= 60)
    {
        segundoFinal -= 60;
        minutoFinal++;
    }
    if (minutoFinal >= 60)
    {
        minutoFinal -= 60;
        horaFinal++;
    }
    if (horaFinal >= 24)
        horaFinal -= 24;

    printf("Horario inicial: %02d:%02d:%02d\n", horaInicial, minutoInicial, segundoInicial);
    printf("Horario Final: %02d:%02d:%02d\n", horaFinal, minutoFinal, segundoFinal);
    
    return EXIT_SUCCESS;
}