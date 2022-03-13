#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Pegar uma string e printar ela
    string s = get_string("Antes: ");
    printf("Depois: ");

    // Verificar se encontra letras minúsculas e altera-las para maiúsculas
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}