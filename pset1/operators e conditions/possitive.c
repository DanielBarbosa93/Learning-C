// Abstração e escopo

#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    printf( "%i\n", i);
}

// Prompt o usuáro por um inteiro positivo
int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Inteiro positivo: ");
    }
    while (n < 1);
    return n;

}