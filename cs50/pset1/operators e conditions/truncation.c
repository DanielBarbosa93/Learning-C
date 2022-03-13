#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Pegar números do usuário
    int x = get_int("x: ");
    int y = get_int("y: ");

    // Dividir esses dois números
    float z = (float) x / (float) y;

    printf("%f\n", z);
}