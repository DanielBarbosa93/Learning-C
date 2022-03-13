#include <cs50.h>
#include <stdio.h>
#include <string.h>

// argc = Contagem de argumento, argv = vetor de argumento
// o computador irá armazenar o total número de palavras em argc(incluindo o próprio nome do programa)
// e vai preencher o array de strings argv com todas as palavras digitadas no prompt, não só os argumento
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            printf("%c\n", argv[1][i]);
        }
    }
}