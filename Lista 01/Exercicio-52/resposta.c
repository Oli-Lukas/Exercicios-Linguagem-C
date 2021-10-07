/**
 * 52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio
 *     deve ser repartido proporcionalmente ao valor que cada deu
 *     para a realização da aposta. Faça um programa que leia
 *     quanto cada apostador investiu, o valor do prêmio, e imprima
 *     quanto cada um ganharia do prêmio com base no valor investido.
 **/

#include <stdio.h>
#include <stdlib.h>

float calculaParte(float premio, float taxa);

int main()
{
    float valor_investido_a, valor_investido_b, valor_investido_c, premio, total;
    float taxa_a, taxa_b, taxa_c, parte_a, parte_b, parte_c;

    printf("Quanto foi investido pelo ganhador A? R$ "); scanf("%f", &valor_investido_a);
    printf("Quanto foi investido pelo ganhador B? R$ "); scanf("%f", &valor_investido_b);
    printf("Quanto foi investido pelo ganhador C? R$ "); scanf("%f", &valor_investido_c);
    printf("Quanto foi o premio? R$ "); scanf("%f", &premio);

    total = valor_investido_a + valor_investido_b + valor_investido_c;

    taxa_a = valor_investido_a / total;
    taxa_b = valor_investido_b / total;
    taxa_c = valor_investido_c / total;

    printf("Taxa 1 = %.2f%%.\n", taxa_a * 100);
    printf("Taxa 2 = %.2f%%.\n", taxa_b * 100);
    printf("Taxa 3 = %.2f%%.\n", taxa_c * 100);
    printf("Parte do ganhador A = R$ %.2f.\n", calculaParte(premio, taxa_a));
    printf("Parte do ganhador A = R$ %.2f.\n", calculaParte(premio, taxa_b));
    printf("Parte do ganhador A = R$ %.2f.\n", calculaParte(premio, taxa_c));
    
    return EXIT_SUCCESS;
}

float calculaParte(float premio, float taxa)
{
    return (premio * taxa);
}