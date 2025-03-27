#include <stdio.h>
#include <inttypes.h>

int main(){
    uint8_t tiny = 0xff;
    uint16_t small = 0xffff;
    uint32_t medium = 0xffffffff;
    uint64_t big = 0xffffffffffffffff;

    // %zu - unsigned long (retorno do operador sizeof)
    printf("Tamanho de tiny: %zu bytes\n", sizeof(tiny));
    printf("Tamanho de small: %zu bytes\n", sizeof(small));
    printf("Tamanho de medium: %zu bytes\n", sizeof(medium));
    printf("Tamanho de big: %zu bytes\n", sizeof(big));

    printf("\n");
    printf("tiny: %u\n", tiny);
    printf("small: %u\n", small);
    printf("medium: %u\n", medium);
    printf("big: %zu\n", big);

    // Tentando somar 1 no medium...
    medium++;
    printf("\nmedium: %u\n", medium);

    int valor = 2147483647;
    printf("\nvalor: %u\n", valor);
    valor++;
    printf("valor: %u\n", valor);

    // Exemplo de problema com sinal: loop infinito
    /*
    for (char i = 0; i < 200; i++)
    {
        printf("%d\n", i);
    }
    */

    // Ponto flutuante tem seus PROBLEMAS!
    float valor2 = 314000000;
    printf("valor2: %f\n", valor2);
    valor2 += 30;
    printf("valor2: %f\n", valor2);
}