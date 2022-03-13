#include <stdio.h>


// mexendo em valores que ainda não foram inicializados
int main(void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", scores[i]);
    }
}