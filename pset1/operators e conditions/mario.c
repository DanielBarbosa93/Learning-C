#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Pegar positivo inteiro do usuário
    int n;
    do
    {
        n = get_int("Largura: ");
    }
    while (n < 1);

    // Print o numéro como pontos de interrogação
    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}