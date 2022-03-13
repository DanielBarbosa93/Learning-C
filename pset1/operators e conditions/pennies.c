#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float real = get_float("Real: ");
    int centavos = round(real * 100);
    printf("Centavos: %i\n", centavos);
}