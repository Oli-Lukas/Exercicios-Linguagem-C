/**
 * 44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada. Calcule
 *     e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura_degrau, altura_total;
    int quantidade_degraus = 0;

    printf("Digite a altura de cada degrau: "); scanf("%f", &altura_degrau);
    printf("Digite a altura total que deseja subir: "); scanf("%f", &altura_total);

    quantidade_degraus = altura_total / altura_degrau;
    quantidade_degraus++;

    printf("Voce precisa subir %d degraus para atingir - ou ultrapassar - essa altura.\n", quantidade_degraus);
    
    return EXIT_SUCCESS;
}