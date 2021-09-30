/**
 * 4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 *    * - O número digitado ao quadrado;
 *    * - A raiz quadrada do número digitado.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero;

    printf("Digite um numero: "); scanf("%f", &numero);

    if (numero > 0)
    {
        printf("O quadrado de %f: %f.\n", numero, numero * numero);
        printf("A raiz quadrada de %f: +-%f.\n", numero, sqrt(numero));
    }
    
    return EXIT_SUCCESS;
}