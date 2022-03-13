#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Pegar valor em real maior que zero
    float real;

    do
    {
        real = get_float("Real: ");
    }
    while (real < 0);

    // Passar para centavos e arredondar o valor
    int centavos = round(real * 100);
    //printf("%i\n", centavos);

    // Contar quantas moedas de 25
    int moedas = 0;
    //int troco = centavos;

    do
    {
        centavos = centavos - 25;
        moedas++;
    }
    while (centavos >= 25);

    // Contar quantas moedas de 10
    do
    {
        centavos = centavos - 10;
        moedas++;
    }
    while (centavos >= 10);

    // Contar quantas moedas de 5
    do
    {
        centavos = centavos - 5;
        moedas++;
    }
    while (centavos >= 5);

    // Contar quantas moedas de 1
    do
    {
        centavos = centavos - 1;
        moedas++;
    }
    while (centavos >= 1);

    printf("%i\n", moedas);
}