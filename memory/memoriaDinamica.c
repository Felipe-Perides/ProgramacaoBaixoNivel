#include <stdio.h>
#include <stdlib.h>

#define SIZE 2000000

int main(){

    // Alocação de memória
    double* array1 = malloc(sizeof *array1 * SIZE);
    double* array2 = calloc(SIZE, sizeof *array2);
    double* array3 = calloc(SIZE, sizeof *array3);

    if (!array1 || !array2 || !array3) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    double* array4 = realloc(array3, (SIZE / 2) * sizeof *array4);

    if (!array4) {
        free(array1);
        free(array2);
        free(array3); // ainda é válido se realloc falhou
        printf("Erro no realloc.\n");
        return 1;
    }
    array3 = NULL; // evita uso acidental
    
    printf("tam. mem 1: %zu\n", sizeof *array1 * SIZE);
    printf("tam. mem 2: %zu\n", sizeof *array2 * SIZE);
    printf("tam. mem 3: %zu\n", (SIZE / 2) * sizeof *array3);
    printf("tam. mem 4: %zu\n", (SIZE / 2) * sizeof *array4);


    for(int i = 0; i < SIZE; i++){
        array1[i] = i;
        array2[i] = i;
    }
    for(int i = 0; i < SIZE/2; i++){
        array4[i] = i;
    }

    // Liberação da memória
    free(array1);
    free(array2);
    // Se o realloc for bem-sucedido, o ponteiro original (array3) é inválido e não deve ser usado mais
    // nem mesmo para free()!
    free(array4);

    // Alocação de Memória Dinâmica em Matrizes

    // Para trabalhar com dois índices, precisamos primeiro alocar um array de linhas:
    int** matriz = malloc(5 * sizeof(int*));

    // Então, para cada linha, alocamos espaço para as colunas:
    for(int i = 0; i < 5; i++){
        matriz[i] = malloc(5 * sizeof(int));
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matriz[i][j] = i + j;
        }
    }

    printf("\n");

    printf("Matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Para liberar a matriz, basta reverter o processo
    // Primeiro liberamos cada linha, e depois liberamos o array de linhas:
    for(int i = 0; i < 5; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}