#include <cs50.h>
#include <stdio.h>

float desconto(float preco, int porcentagem);

int main(void)
{
    float regular = get_float("Preço: ");
    int porcentagem_de = get_int("Porcentagem de: ");
    float promocao = desconto(regular, porcentagem_de);
    printf("Preço na promoção: %.2f\n", promocao);
}

float desconto(float preco, int porcentagem)
{
    //float promocao = preco *(100 - porcentagem) / 100;
    //return promocao;
    // Mesma coisa que o debaixo
    return preco * (100 - porcentagem) / 100;
}