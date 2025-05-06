#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define NUM_SEMENTES 5

int main(){
    srand(time(NULL));


    printf("Escreva as dimensoes da matriz desejada(Altura -> 3 digitos): \n");
    char altura[4];
    fgets(altura, sizeof(altura), stdin);
    int alt = atoi(altura);

    printf("Escreva as dimensoes da matriz desejada(Largura -> 3 digitos): \n");
    char largura[4];
    fgets(largura, sizeof(largura), stdin);
    int larg = atoi(largura);

    char** matriz = malloc(alt * sizeof(char*));
    for(int i = 0; i < alt; i++){
        matriz[i] = malloc(larg * sizeof(char));
    }
    
    for(int i = 0; i < alt; i++){
        for(int j = 0; j < larg; j++){
            matriz[i][j] = ' ';
        }
    }

    int sementes[NUM_SEMENTES][2];

    for (int s = 0; s < NUM_SEMENTES; s++) {
        int i = rand() % alt;
        int j = rand() % larg;
        sementes[s][0] = i;
        sementes[s][1] = j;
        matriz[i][j] = '.';  // marca semente
    }

    // Preenche matriz com distâncias
    for (int i = 0; i < alt; i++) {
        for (int j = 0; j < larg; j++) {
            if (matriz[i][j] == '.') continue; // já é uma semente

            float menorDist = 9999.0;
            int sementeMaisProx = -1;
            for (int s = 0; s < NUM_SEMENTES; s++) {
                int k = sementes[s][0];
                int l = sementes[s][1];
                float dist = sqrtf((i - k)*(i - k) + (j - l)*(j - l));
                if (dist < menorDist){
                    menorDist = dist;
                    sementeMaisProx = s;
                }
            }

            // Marca a semente mais próxima como '1' a '5'
            for (int s = 0; s < NUM_SEMENTES; s++) {
                int i = sementes[s][0];
                int j = sementes[s][1];
                matriz[i][j] = '1' + s;
            }

            /*
            // Arredonda e converte em caractere
            int d = (int)(menorDist + 0.5);
            if (d < 10)
                matriz[i][j] = '0' + d;
            else
                matriz[i][j] = '*'; // se for maior que 9
            */
        }
    }

    // Imprime a matriz final
    printf("\nMatriz com distancias Euclidianas:\n");
    for (int i = 0; i < alt; i++) {
        for (int j = 0; j < larg; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    // Libera memória
    for (int i = 0; i < alt; i++) {
        free(matriz[i]);
    }
    free(matriz);


    return 0;
}