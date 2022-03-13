#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s); // Vá para o endereço de s
    printf("%c\n", *(s+1)); // vá para o endereço de s + 1
    printf("%c\n", s[2]);
    printf("%i\n", *(s+3)); // special caracter nul
}