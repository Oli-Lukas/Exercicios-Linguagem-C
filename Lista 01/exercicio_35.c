/**
 * 35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
 *     hipotenusa = sqrt(a² + b²). Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa
 *     através da equação. Imprima o resultado dessa operação.
 **/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int quadrado(int numero);

int main()
{
    float cateto_a, cateto_b, hipotenusa;
    
    printf("Entre com o valor do cateto a: "); scanf("%f", &cateto_a);
    printf("Entre com o valor do cateto b: "); scanf("%f", &cateto_b);

    hipotenusa = sqrt(quadrado(cateto_a) + quadrado(cateto_b));

    printf("Cateto a   = %.4f.\n", cateto_a);
    printf("Cateto b   = %.4f.\n", cateto_b);
    printf("Hipotenusa = %.4f.\n", hipotenusa);

    return EXIT_SUCCESS;
}

int quadrado(int numero)
{
    return (numero * numero);
}