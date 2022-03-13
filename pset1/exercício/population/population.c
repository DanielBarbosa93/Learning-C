#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int inicial;
    int final;

    // Pegar o valor inicial maior que 9
    do
    {
        inicial = get_int("Tamanho inicial: ");
    }
    while (inicial < 9);

    // Pegar o valor final maior que o valor inicial
    do
    {
        final = get_int("Tamanho final: ");
    }
    while (final < inicial);

    // Calcular o numeros de anos que levaria para alcançar o valor final de lhamas desejado
    int lhama = inicial;
    int ano = 0;

    while (lhama < final)
    {
        lhama = lhama + (lhama / 3) - (lhama / 4);
        ano++;
    }
    printf("Years: %i\n", ano);
}