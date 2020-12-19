/**
 * 48. Leia um valor inteiro em segundos, e imprima-o em 
 *     horas, minutos e segundos. 
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tmp, qtdSegundos, horas, minutos, segundos;

    printf("Digite uma quantidade de segundos: "); scanf("%d", &qtdSegundos);

    tmp = qtdSegundos;

    horas = tmp / 3600;
    tmp -= horas * 3600;
    minutos = tmp / 60;
    tmp -= minutos * 60;
    segundos = tmp;

    printf("%d segundos equivale a %d horas, %d minutos e %d segundos.", qtdSegundos, horas, minutos, segundos);
    
    return EXIT_SUCCESS;
}