#include <cs50.h>
#include <stdio.h>

int main(void)
{

    long number;

    number = get_long("Cartão de Crédito: ");

    // Pegar o valor de um e outro digito começando pelo penultimo
    int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8;

    dig1 = ((number % 100) / 10) * 2;
    dig2 = ((number % 10000) / 1000) * 2;
    dig3 = ((number % 1000000) / 100000) * 2;
    dig4 = ((number % 100000000) / 10000000) * 2;
    dig5 = ((number % 10000000000) / 1000000000) * 2;
    dig6 = ((number % 1000000000000) / 100000000000) * 2;
    dig7 = ((number % 100000000000000) / 10000000000000) * 2;
    dig8 = ((number % 10000000000000000) / 1000000000000000) * 2;

    // Somar cada unidade do digito
    dig1 = (dig1 % 100 / 10) + (dig1 % 10);
    dig2 = (dig2 % 100 / 10) + (dig2 % 10);
    dig3 = (dig3 % 100 / 10) + (dig3 % 10);
    dig4 = (dig4 % 100 / 10) + (dig4 % 10);
    dig5 = (dig5 % 100 / 10) + (dig5 % 10);
    dig6 = (dig6 % 100 / 10) + (dig6 % 10);
    dig7 = (dig7 % 100 / 10) + (dig7 % 10);
    dig8 = (dig8 % 100 / 10) + (dig8 % 10);

    // Pegar o valor de um e outro digito começando pelo último
    int dig9, dig10, dig11, dig12, dig13, dig14, dig15, dig16;

    dig9 = (number % 10);
    dig10 = ((number % 1000) / 100);
    dig11 = ((number % 100000) / 10000);
    dig12 = ((number % 10000000) / 1000000);
    dig13 = ((number % 1000000000) / 100000000);
    dig14 = ((number % 100000000000) / 10000000000);
    dig15 = ((number % 10000000000000) / 1000000000000);
    dig16 = ((number % 1000000000000000) / 100000000000000);

    // Somar o valor de cada soma dos digitos
    int soma1 = dig1 + dig2 + dig3 + dig4 + dig5 + dig6 + dig7 + dig8;
    int soma2 = dig9 + dig10 + dig11 + dig12 + dig13 + dig14 + dig15 + dig16;
    int soma3 = soma1 + soma2;

    // Verificar se é visa, mastercard, American Express ou inválido
    if ((soma3 % 10) != 0)
    {
        printf("%s\n", "INVALID");
        return 0;
    }
    int tamanho = 0;
    long visa = number;
    long mastercard = number;
    long express = number;

    while (number > 0)
    {
        number = number / 10;
        tamanho++;
    }
    // VISA
    while (visa >= 10)
    {
        visa /= 10;
    }
    if (visa == 4 && (tamanho == 13 || tamanho == 16))
    {
        printf("%s\n", "VISA");
        return 0;
    }
    // Mastercard
    while (mastercard >= 100000000000000)
    {
        mastercard/= 100000000000000;
    }
    if ( tamanho == 16 && (mastercard == 16 || mastercard == 51 || mastercard == 52 || mastercard == 53 || mastercard == 54 || mastercard == 55))
    {
        printf("%s\n", "MASTERCARD");
        return 0;
    }

    // American Express
    while (express >= 10000000000000)
    {
        express /= 10000000000000;
    }
    if (tamanho == 15 && (express == 34 || express == 37))
    {
        printf("%s\n", "AMEX");
        return 0;
    }
    else
    printf("%s\n", "INVALID");
    return 0;

}