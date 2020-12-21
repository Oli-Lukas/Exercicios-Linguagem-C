/**
 * 50. Implemente um programa que calcule o ano de nascimento
 *     de uma pessoa a partir de sua idade e do ano atual.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoAtual, idade, anoDeNascimento;

    printf("Digite a sua idade: "); scanf("%d", &idade);
    printf("Digite o ano atual: "); scanf("%d", &anoAtual);

    anoDeNascimento = anoAtual - idade;

    printf("Voce nasceu no ano de %d.\n", anoDeNascimento);
    
    return EXIT_SUCCESS;
}