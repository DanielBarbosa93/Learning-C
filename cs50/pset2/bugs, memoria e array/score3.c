#include <cs50.h>
#include <stdio.h>

const int TOTAL = 3;

int main(void)
{
    int notas[TOTAl];
    for (int i = 0; i < TOTAL; i++);
    {
        notas[i] = get_int("Notas: ");
    }

    printf("média: %f\n", media(TOTAL, notas));

}

float media(int tamanho, int array[])
{
    int soma = 0;
    for(int i = 0; i < tamanho; i++);
    {
        // soma = soma + array[i];
        soma += array[i];
    }
    return soma / (float) tamanho;
}