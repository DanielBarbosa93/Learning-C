#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Antes: ");
    printf("Depois: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i])) // islower é um função da biblioteca ctype.h que verifica se tem minúsculas
        {
            printf("%c", toupper(s[i])); // toupper é uma função da biblioteca ctype.h que altera minúsculas para maiúsculas
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}