#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *arquivo = fopen("phonebook.csv", "a");
    if (arquivo == NULL)
    {
        return 1;
    }

    char *nome = get_string("Nome: ");
    char *numero = get_string("Número: ");

    fprintf(arquivo, "%s, %s\n", nome, numero);

    fclose(arquivo);
}
