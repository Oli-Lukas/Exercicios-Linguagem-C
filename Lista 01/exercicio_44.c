/**
 * 44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada. Calcule
 *     e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alturaDegrau, alturaTotal;
    int qtdDegraus = 0;

    printf("Digite a altura de cada degrau: "); scanf("%f", &alturaDegrau);
    printf("Digite a altura total que deseja subir: "); scanf("%f", &alturaTotal);

    qtdDegraus = alturaTotal / alturaDegrau;
    qtdDegraus++;

    printf("Voce precisa subir %d degraus para atingir - ou ultrapassar - essa altura.\n", qtdDegraus);
    
    return EXIT_SUCCESS;
}