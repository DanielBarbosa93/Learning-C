#include <cs50.h>
#include <stdio.h>


void draw(int h);

int main(void)
{
    int altura = get_int("Altura: ");
    draw(altura);
}


// Usar recursão para desenhar escadas do mario
void draw(int h)
{
    // condição para a função parar de chamar a si mesma
    if (h == 0)
    {
        return;
    }
    // recursion = função chamar a si mesma
    draw(h - 1);

    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}

// void draw(int h)
// {
//     for (int i = 1; i <= h; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }