#include <cs50.h>
#include <stdio.h>

// argc = Contagem de argumento, argv = vetor de argumento
// o computador irá armazenar o total número de palavras em argc(incluindo o próprio nome do programa)
// e vai preencher o array de strings argv com todas as palavras digitadas no prompt, não só os argumento
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("Hello, world\n");
    }
}