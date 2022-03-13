#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura;

    do
    {
        // Pegar o valor de altura
        altura = get_int("Altura: ");
    }
    while (altura < 1 || altura > 8);

    // Printar os blocos de acordo com o valor de altura
    for (int i = 0; i < altura; i++)

    {
        for (int j = 0; j < i + altura + 3; j++)

        {
            if (i + j < altura - 1 || j == altura || j == altura + 1)

                printf(" ");

            else

                printf("#");
        }

        printf("\n");
    }

}