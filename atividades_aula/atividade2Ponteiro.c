#include <stdio.h>

void exibeMemoria(const unsigned char *mem, int tam);

int main() {
    char *text = "Prog. Baixo Nível";
    int v[] = {0, 1, 2, 3, 4};
    int matriz[4][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11},
        {12, 13, 14, 15}};

    printf("\nExibe a string:");
    exibeMemoria((unsigned char *)text, 17);
    printf("\nExibe o vetor:");
    exibeMemoria((unsigned char *)v, 5 * sizeof(int));
    printf("\nExibe a matriz:");
    exibeMemoria((unsigned char *)matriz, 16 * sizeof(int));
}

void exibeMemoria(const unsigned char *mem, int tam){
    for (int i = 0; i < tam; i++)
    {
        if (i % 16 == 0)
            printf("\n%p: ", mem + i);
        printf("%02X ", mem[i]);
    }
    printf("\n");
}