/**
 * 16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A fórmula de conversão
 *     é: C = P * 2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float centimetros, polegadas;

    printf("Entre com o comprimento em polegadas: "); scanf("%f", &polegadas);
    centimetros = polegadas * 2.54;
    printf("%.2f polegada(s) equivale a %.2f centimetro(s).\n", polegadas, centimetros);
    
    return EXIT_SUCCESS;
}