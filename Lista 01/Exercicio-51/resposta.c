/**
 * 51. Escreva um programa que leia as coordenadas x e y de pontos
 *     do R² e calcule sua distância da origem (0, 0).
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, qx, qy;
    float distancia;

    printf("Informe a coordenada x: "); scanf("%d", &x);
    printf("Informe a coordenada y: "); scanf("%d", &y);
    
    qx = x * x;
    qy = y * y;

    distancia = sqrt(qx + qy);

    printf("A distancia do ponto para o centro (0, 0) eh %.4f.\n", distancia);

    return EXIT_SUCCESS;
}