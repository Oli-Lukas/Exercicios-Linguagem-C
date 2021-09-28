/**
 * 47. Leia um número inteiro de 4 dígitos (de 1000 a 9999)
 *     e imprima 1 dígito por linha.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int  lerNumero();
bool validaNumero(int numero);
void exibeAlgarismos(int numero);
int  pegaAlgarismo(int numero, int posicao);
int  potencia(int base, int expoente);

int main()
{
    int numero;
    int contador;
    int algarismo;

    numero = lerNumero();
    exibeAlgarismos(numero);

    return EXIT_SUCCESS;
}

int lerNumero()
{
    int numero;
    bool flag;

    flag = false;

    do
    {
        printf("Digite um numero valido: "); scanf("%d", &numero);

        if (!validaNumero(numero))
        {
            printf("Numero digitado invalido!\n");
            printf("Digite um numero de quatro digitos (de 1000 a 9999).\n\n");
        }
        else flag = true;
    }
    while (!flag);

    return numero;
}

bool validaNumero(int numero)
{
    return (numero >= 1000 && numero <= 9999);
}

void exibeAlgarismos(int numero)
{
    int contador;
    int algarismo;

    for (contador = 4; contador >= 1; contador--)
    {
        algarismo = pegaAlgarismo(numero, contador);
        printf("Algarismo: %d\n", algarismo);
    }
}

int pegaAlgarismo(int numero, int posicao)
{
    int algarismo;
    int classe_numerica;
    int contador;

    for (contador = 4; contador >= 1; contador--)
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