/**
 * 50. Implemente um programa que calcule o ano de nascimento
 *     de uma pessoa a partir de sua idade e do ano atual.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_atual, idade, ano_nascimento;

    printf("Digite a sua idade: "); scanf("%d", &idade);
    printf("Digite o ano atual: "); scanf("%d", &ano_atual);

    ano_nascimento = ano_atual - idade;

    printf("Voce nasceu no ano de %d.\n", ano_nascimento);
    
    return EXIT_SUCCESS;
}