#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");
    // Malloc para alocar memória para t
    char *t = malloc(strlen(s) + 1);
    // Ter certeza que t tem um endereço válido
    if (t == NULL) // NULL não é nul. NUll é a ausência de endereço. tecnicamente,seu endereço é 0
    {
        return 1;
    }

    // Copiar cada caractere de s para a memória alocada para o pointer t
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        // *(t+1) = *(s+1); Mesmo que o debaixo, porém menos legível
         t[i] = s[i];
    }

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t); // malloc é pedir por memória. free é liberar essa memória para que o computador não fique sem memória

}




// int main(void)
// {
//     char *s = get_string("s: ");

//     char *t = s;

//     t[0] = toupper(t[0]);

//     printf("s: %s\n", s);
//     printf("t: %s\n", t);
// }