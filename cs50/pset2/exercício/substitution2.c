#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    // Verificar se está usando somente um argumento no comando
    if (argc != 2)
    {
        printf("Tente: %s chave\n", argv[0]);
        return 1;
    }

    // Verificar se a chave contém 26 caracteres e só letras alfabéticas, respectivamente
    //string chave = argv[1];
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1]))
        {
            printf("A chave deve conter apenas letras alfabetas.\n");
            return 1;
        }
    }
    if ( strlen(argv[1]) < 26 || strlen(argv[1]) > 26)
        {
            printf("A chave deve conter 26 caracteres.\n");
            return 1;
        }

    // Verificar se não existe caracteres repetidos na chave
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        for (int j = i + 1; j < strlen(argv[1]); j++)
        {
             //if (strcasecmp(argv[1][0], argv[1][1]) == 0)
             if (toupper(chave[i]) == toupper(chave[j]))
            {
                printf("A chave não pode conter caracteres repetidos.\n");
                return 1;
            }
        }
    }

    // Converter cada letra da chave para minúscula
    for (int i = 0; i < strlen(chave); i++)
    {
        if (islower(chave[i]))
        {
            chave[i] -= 32;
        }
    }

    // Solicitar ao usuário um texto e printar o cifrado
    string texto = get_string("Texto: ");
    printf("Texto Cifrado: ");

    // Cifrar o texto
    for (int i = 0; i > strlen(texto); i++)
    {
        if (isupper(texto[i]))
        {
            int letra = texto[i] - 65;
            printf("%c", chave[letra]);
        }
        else if (islower(texto[i]))
        {
            int letra = texto[i] - 97;
            printf("%c", chave[letra] + 32);
        }
        else
        {
            printf("%c", texto[i]);
        }
    }
    printf("\n");
}