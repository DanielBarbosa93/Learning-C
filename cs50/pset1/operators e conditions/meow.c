#include <stdio.h>

// P rotótipo
void meow(void);

int main(void)
{
    meow();
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}