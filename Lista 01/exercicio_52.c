/**
 * 52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio
 *     deve ser repartido proporcionalmente ao valor que cada deu
 *     para a realização da aposta. Faça um programa que leia
 *     quanto cada apostador investiu, o valor do prêmio, e imprima
 *     quanto cada um ganharia do prêmio com base no valor investido.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorInvestido1, valorInvestido2, valorInvestido3, premio, total;
    float taxa1, taxa2, taxa3, parte1, parte2, parte3;

    printf("Quanto foi investido pelo ganhador A? R$ "); scanf("%f", &valorInvestido1);
    printf("Quanto foi investido pelo ganhador B? R$ "); scanf("%f", &valorInvestido2);
    printf("Quanto foi investido pelo ganhador C? R$ "); scanf("%f", &valorInvestido3);
    printf("Quanto foi o premio? R$ "); scanf("%f", &premio);

    total = valorInvestido1 + valorInvestido2 + valorInvestido3;

    taxa1 = valorInvestido1 / total;
    taxa2 = valorInvestido2 / total;
    taxa3 = valorInvestido3 / total;

    printf("Taxa 1 = %.2f%%.\n", taxa1 * 100);
    printf("Taxa 2 = %.2f%%.\n", taxa2 * 100);
    printf("Taxa 3 = %.2f%%.\n", taxa3 * 100);

    parte1 = premio * taxa1;
    parte2 = premio * taxa2;
    parte3 = premio * taxa3;

    printf("Parte do ganhador A = R$ %.2f.\n", parte1);
    printf("Parte do ganhador A = R$ %.2f.\n", parte2);
    printf("Parte do ganhador A = R$ %.2f.\n", parte3);
    
    return EXIT_SUCCESS;
}