#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Verificar se o usuário está usando argumento
    if (argc != 2)
    {
        printf("Tente: %s chave\n", argv[0]);
        return 1;
    }
    // Verificar se o argumento chave contém 26 caracteres
    string chave = argv[1];
    for (int i = 0, n = strlen(chave); i < n; i++)
    {
        if (n != 26)
        {
            printf("A chave precisa conter 26 caracteres.\n");
            return 1;
        }

        // Verificar se o o argumento chave contem apenas letras
        else if (!isalpha(chave[i]))
        {
            printf("A chave deve conter apenas letras alfabéticas.\n");
            return 1;
        }
    }

    // Verificar se a chave não contem caracteres repetidos
    for (int i = 0, n = strlen(chave); i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
           if (toupper(chave[i]) == toupper(chave[j]))
           {
               printf("A chave não pode conter caracteres repetidos.\n");
               return 1;
           }
        }
    }
    // Converter a chave para letras maiúsculas para facilitar
    for (int i = 0, n = strlen(chave); i < n; i++)
    {
        if (islower(chave[i]))
        {
            chave[i] -= 32;
        }
    }
    // Solicitar ao usuário um texto e printar
    string texto = get_string("Texto: ");
    printf("ciphertext: ");

    // Cifrar o texto  de acordo com a chave, certificando a formatação
    for (int i = 0, n = strlen(texto); i < n; i++)
    {
        if (isupper(texto[i]))
        {
            int letra = texto[i] - 65;
            printf("%c", chave[letra]);
        }
        else if (islower(texto[i]))
        {
            int letra = (texto[i] - 97);
            printf("%c", chave[letra] + 32);
        }
        else
        {
            printf("%c", texto[i]);
        }
    }
    printf("\n");
}