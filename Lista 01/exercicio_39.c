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
    float primeiroGanhador, segundoGanhador, terceiroGanhador;

    primeiroGanhador = premio * (46.0 / 100.0);
    segundoGanhador = premio * (32.0 / 100.0);
    terceiroGanhador = premio - primeiroGanhador - segundoGanhador;

    printf("Primeiro Ganhador = R$ %.2f.\n", primeiroGanhador);
    printf("Segundo Ganhador = R$ %.2f.\n", segundoGanhador);
    printf("Terceiro Ganhador = R$ %.2f.\n", terceiroGanhador);
    
    return EXIT_SUCCESS;
}