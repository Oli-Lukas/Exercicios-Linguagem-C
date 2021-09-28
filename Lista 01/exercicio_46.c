/**
 * 46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere outro número
 *     formado pelos dígitos invertidos do número lido. Exemplo:
 *
 *     NúmeroLido = 123
 *     NúmeroGerado = 321
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int  lerNumero();
bool validaNumero(int numero);
int  inverteNumero(int numero);
int  pegaAlgarismo(int numero, int posicao);
int  potencia(int base, int expoente);
int  montaNumero(int digito, int ordem_numerica);

int main()
{
    int numero, numero_gerado;

    numero        = lerNumero();
    numero_gerado = inverteNumero(numero);

    printf("Numero Gerado: %d\n", numero_gerado);

    return EXIT_SUCCESS;
}

int lerNumero()
{
    int  numero;
    bool flag;

    flag = false;

    do
    {
        printf("Digite um numero valido: "); scanf("%d", &numero);
        
        if (!validaNumero(numero))
        {
            printf("Numero digitado invalido!\n");
            printf("Por favor! Digite um numero de tres digitos (de 100 a 999).\n\n");
        }
        else flag = true;
    }
    while (!flag);

    return numero;
}

bool validaNumero(int numero)
{
    return (numero > 99 && numero < 1000);
}

int inverteNumero(int numero)
{
    int contador;
    int numero_invertido;
    int posicao_numero_invertido;

    numero_invertido         = 0;
    posicao_numero_invertido = 1;

    for (contador = 3; contador >= 1; contador--)
    {
        int algarismo;

        algarismo         = pegaAlgarismo(numero, contador);
        numero_invertido += montaNumero(algarismo, posicao_numero_invertido);

        posicao_numero_invertido++;
    }

    return numero_invertido;
}

int pegaAlgarismo(int numero, int posicao)
{
    int contador;
    int classe_numerica;
    int algarismo;

    for (contador = 3; contador >= 1; contador--)
    {
        classe_numerica = potencia(10, contador - 1);

        algarismo = numero / classe_numerica;
        numero   -= algarismo * classe_numerica;

        if (contador == posicao) return algarismo;
    }
}

int potencia(int base, int expoente)
{
    if (expoente == 0)      return 1;
    else if (expoente == 1) return base;
    else                    return base * potencia(base, expoente - 1);
}

int montaNumero(int digito, int ordem_numerica)
{
    return digito * potencia(10, ordem_numerica - 1);
}