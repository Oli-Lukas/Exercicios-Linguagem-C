/**
 * 3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado.
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
        printf("Numero positivo - calcular raiz quadrada.\n");
        printf("A raiz quadrada de %f eh +-%f.\n", numero, sqrt(numero));
    }
    else
    {
        printf("Numero nao-positivo - calcular quadrado.\n");
        printf("O quadrado de %f eh %f.\n", numero, numero*numero);
    }

    return EXIT_SUCCESS;
}