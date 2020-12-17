/**
 * 35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
 *     hipotenusa = sqrt(a² + b²). Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa
 *     através da equação. Imprima o resultado dessa operação.
 **/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float catetoA, catetoB, hipotenusa;
    
    printf("Entre com o valor do cateto a: "); scanf("%f", &catetoA);
    printf("Entre com o valor do cateto b: "); scanf("%f", &catetoB);

    hipotenusa = sqrt((catetoA * catetoA) + (catetoB * catetoB));

    printf("Cateto a   = %.4f.\n", catetoA);
    printf("Cateto b   = %.4f.\n", catetoB);
    printf("Hipotenusa = %.4f.\n", hipotenusa);

    return EXIT_SUCCESS;
}