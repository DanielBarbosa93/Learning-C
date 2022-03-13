#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int letras = 0;
    int palavras = 1;
    int frases = 0;

    // Perguntar ao usuário por um texto
    string texto = get_string("Texto: ");

    // Contar quantas letras, palavras e frases,respectivamente, existem no texto.
    for (int i = 0; i < strlen(texto); i++)
    {
        if ((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto [i] >= 'Z')) // (isalpha(texto[i]))
        {
            letras++;
        }
        else if (texto[i] == ' ') // (isspace(texto[i]))
        {
            palavras++;
        }
        else if (texto[i] == '.' || texto[i] == '!' || texto[i] == '?')
        {
            frases++;
        }
    }

    // Calcular a grade utiliznado o índice Coleman-Liau e arredondar o resultado para número inteiro
    float calculo = (0.0588 * letras / palavras * 100) - (0.296 * frases / palavras * 100) - 15.8;
    int indice = round(calculo);

    printf("contém %i letras, %i palavras e %i frases\n", letras, palavras, frases);

    // Printar o resultado. Se menor que 1, antes da grade 1. Se maior que 16, grade 16+.
    if (indice < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (indice > 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        printf("Grade %i\n", indice);
        return 0;
    }

}