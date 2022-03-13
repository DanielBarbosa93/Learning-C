#include <stdio.h>

int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    // usar o 3.0 ao invés de 3 para indicar para faze a conta em float. Se usasse 3 o computador iria entender que é inteiro e daria errado
    printf("média: %f\n", (score1 + score2 + score3) / 3.0);

}
