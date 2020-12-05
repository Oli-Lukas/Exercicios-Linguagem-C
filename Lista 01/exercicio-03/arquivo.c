/**
 * 3. Peça ao usuário para digitar três valores inteiros e
 *    imprima a soma deles.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma = 0;

    printf("Informe um numero inteiro: "); scanf("%d", &numero);
    soma += numero;
    printf("Informe outro numero inteiro: "); scanf("%d", &numero);
    soma += numero;
    printf("Informe outro numero inteiro: "); scanf("%d", &numero);
    soma += numero;

    printf("A soma dos numero digitados e %d.\n", soma);
    
    return EXIT_SUCCESS;
}