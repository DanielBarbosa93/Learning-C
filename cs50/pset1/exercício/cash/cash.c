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


    while (centavos >= 25)
    {
        centavos = centavos - 25;
        moedas++;
    }

    // Contar quantas moedas de 10
    while (centavos >= 10)
    {
        centavos = centavos - 10;
        moedas++;
    }

    // Contar quantas moedas de 5
    while (centavos >= 5)
    {
        centavos = centavos - 5;
        moedas++;
    }

    // Contar quantas moedas de 1
    while (centavos >= 1)
    {
        centavos = centavos - 1;
        moedas++;
    }

    printf("%i\n", moedas);
}