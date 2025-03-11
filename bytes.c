#include <stdio.h>
#include <inttypes.h>

int main(){
    uint8_t tiny = 97;
    uint16_t small = 97;
    uint32_t medium = 97;
    uint64_t large = 97;
    printf("Tamanho de um int8_t: %zu\n", sizeof(tiny));
    printf("Tamanho de um int16_t: %zu\n", sizeof(small));
    printf("Tamanho de um int32_t: %zu\n", sizeof(medium));
    printf("Tamanho de um int64_t: %zu\n", sizeof(large));

    medium = 2000000;
    printf("Valor de medium: %d\n", medium);



    return 0;
}