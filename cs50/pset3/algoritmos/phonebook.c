#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string nomes;
    string numeros;
}
pessoa;

int main(void)
{
    pessoa pessoas[2];

    pessoas[0].nomes = "Brian";
    pessoas[0].numeros = "+1-617-495-1000";

    pessoas[1].nomes = "David";
    pessoas[1].numeros = "+1-949-468-2750";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(pessoas[i].nomes, "David") == 0)
        {
            printf("Encontrado: %s\n", pessoas[i].numeros);
            return 0;
        }
    }
    printf("Não encontrado");
    return 1;
}