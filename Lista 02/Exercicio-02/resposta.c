/**
 * 2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o
 *    número for negativo, mostre uma mensagem dizendo que o número é inválido.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero;

    printf("Digite um numero: "); scanf("%f", &numero);

    if (numero > 0) printf("A raiz quadrada de %f eh +-%f.\n", numero, sqrt(numero));
    else            printf("Numero digitado invalido.");
    
    return EXIT_SUCCESS;
}