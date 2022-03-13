#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Imput: ");
    printf("Output: ");

    //for (int i = 0; s[i] != '\0'; i++)   << mesma coisa que embaixo
    for (int i = 0, n = strlen(s); i < n; i++) // strlen é uma função para saber o tamanho de uma string da biblioteca string.h
    {
        printf("%c", s[i]);
    }
    printf("\n");
}