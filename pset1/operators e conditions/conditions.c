#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Pegar números do usuário
    int x = get_int("x: ");
    int y = get_int("y: ");

    //Comparar esses números
    if (x < y)
    {
        printf("x é menor que y\n");
    }
    else if (x > y)
    {
        printf("x não é menor que y\n");
    }
    else
    {
        printf("x é igual a y\n");
    }
}