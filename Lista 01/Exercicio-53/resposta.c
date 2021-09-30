/**
 * 53. Faça um programa para ler as dimensões de um terreno
 *     (comprimento c e largura l), bem como o preço do metro
 *     de tela p. Imprima o custo para cercar este mesmo terreno
 *     com tela.
 **/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int comprimento, largura, perimetro;
    float preco_metro_tela, custo_cercar_terreno;

    printf("Digite o comprimento do terreno: "); scanf("%d", &comprimento);
    printf("Digite a largura do terreno: "); scanf("%d", &largura);
    perimetro = (2 * comprimento) + (2 * largura);

    printf("Digite o preco por metro de tela: R$ "); scanf("%f", &preco_metro_tela);
    custo_cercar_terreno = preco_metro_tela * perimetro;

    printf("Custo para cercar o terreno: R$ %.2f.\n", custo_cercar_terreno);
    
    return EXIT_SUCCESS;
}