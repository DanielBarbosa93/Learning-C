#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string nomes[] = {"Brian", "David"};
    string numeros[] = {"+1-617-495-1000", "+1-949-468-2750"};

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(nomes[i], "David") == 0)
        {
            printf("Encontrado: %s\n", numeros[i]);
            return 0;
        }
    }
    printf("Não encontrado");
    return 1;
}