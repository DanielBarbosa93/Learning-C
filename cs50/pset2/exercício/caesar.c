#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Verificar se o usuário está usando 2 argumentos
    if (argc != 2)
    {
        printf("Tente: %s chave\n", argv[0]);
        return 1;
    }

    // Verificar se o argumento está em digito
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Tente: %s chave\n", argv[0]);
            return 1;
        }

    }

    // Pegar o texo a ser criptografado
    string texto = get_string("Texto: ");

    // Converter chave para numéro inteiro e printar o texto cifrado
    int k = atoi(argv[1]);
    printf("ciphertext: ");

    //Cifrar o Texto
    for (int i = 0; i < strlen(texto); i++)
    {
        if (isupper(texto[i]))
        {
            printf("%c", (((texto[i] - 65) + k) %26) + 65);
        }
        else if (islower(texto[i]))
        {
            printf("%c", (((texto[i] - 97) + k) %26) + 97);
        }
        else
        {
            printf("%c", texto[i]);
        }
    }
    printf("\n");

}