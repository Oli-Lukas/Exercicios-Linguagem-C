/**
 * 48. Leia um valor inteiro em segundos, e imprima-o em 
 *     horas, minutos e segundos. 
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp, quantidade_segundos, horas, minutos, segundos;

    printf("Digite uma quantidade de segundos: "); scanf("%d", &quantidade_segundos);

    temp = quantidade_segundos;

    horas = temp / 3600;
    temp -= horas * 3600;
    minutos = temp / 60;
    temp -= minutos * 60;
    segundos = temp;

    printf("%d segundos equivale a %d horas, %d minutos e %d segundos.", quantidade_segundos, horas, minutos, segundos);
    
    return EXIT_SUCCESS;
}