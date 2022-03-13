// Copia um arquivo

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // Se assegurar do uso estar correto
    if (argc != 3)
    {
        fprintf(stderr, "Uso: %s FONTE DESTINO\n", argv[0]);
        return 1;
    }

    // Abrir arquivo input
    FILE *fonte = fopen(argv[1], "r");
    if (fonte == NULL) // ou if (!fonte)
    {
        printf("Falha ao abrir %s.\n", argv[1]);
        return 1;
    }

    // Abrir arquivo output
    FILE *destino = fopen(argv[2], "w");
    if (destino == NULL) // ou if (!destino)
    {
        fclose(fonte);
        printf("Falha ao criar %s.\n", argv[2]);
        return 1;
    }

    // Copiar fonte para o destino, um byte por vez
    BYTE buffer;
    while (fread(&buffer, sizeof(BYTE), 1, fonte))
    {
        fwrite(&buffer, sizeof(BYTE), 1, destino);
    }

    // Fechar os arquivos
    fclose(fonte);
    fclose(destino);
    return 0;
}