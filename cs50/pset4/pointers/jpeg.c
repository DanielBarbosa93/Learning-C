// Detecta se um arquivo é um  JPEG

#include <stdint.h>
#include <stdio.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // Checar uso
    if (argc !=2)
    {
        return 1;
    }

    // Abrir arquivo
    FILE *arquivo = fopen(argv[1], "r");
    // if (arquivo == NULL) é o mesmo que o debaixo
    if (!arquivo)
    {
        return 1;
    }

    // Ler os 3 primeiros bytes
    BYTE bytes[3];
    fread(bytes, sizeof(BYTE), 3, arquivo);

    // Checar os 3 primeiros bytes
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("Talvez\n");
    }
    else
    {
        printf("Não\n");
    }
}