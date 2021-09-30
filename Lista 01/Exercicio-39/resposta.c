/**
 * 39. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia
 *     total:
 *
 *     * O primeiro ganhador receberá 46%;
 *     * O segundo receberá 32%;
 *     * O terceiro receberá o restante.
 *
 *     Calcule e imprima a quantia ganha por cada um dos ganhadores.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float premio = 780000;
    float primeiro_ganhador, segundo_ganhador, terceiro_ganhador;

    primeiro_ganhador = premio * (46.0 / 100.0);
    segundo_ganhador  = premio * (32.0 / 100.0);
    terceiro_ganhador = premio - primeiro_ganhador - segundo_ganhador;

    printf("Primeiro Ganhador = R$ %.2f.\n", primeiro_ganhador);
    printf("Segundo Ganhador  = R$ %.2f.\n", segundo_ganhador);
    printf("Terceiro Ganhador = R$ %.2f.\n", terceiro_ganhador);
    
    return EXIT_SUCCESS;
}