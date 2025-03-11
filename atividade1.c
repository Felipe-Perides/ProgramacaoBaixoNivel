#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int* quantNotas(int quantia);

int main(void){
    printf("Digite");
    
    //valor % 100 / 50 / 10 ... 
    
    
    
    
    int notas[5] = {1, 5, 10, 50, 100};
    int numNotas = sizeof(notas) / sizeof(notas[0]);

    printf("Digite um valor qualquer: ");
    int valor;
    scanf("%d", &valor);

    int* result = quantNotas(valor);

    printf("Quantidade de notas usadas: \n");
    for(int i = 0; i<numNotas; i++){
        printf("Notas de %d: %d\n",notas[i], result[i]);
    }
    free(result);
    return 0;
}

int* quantNotas(int quantia){
    int notas[] = {1, 5, 10, 50, 100};
    int numNotas = sizeof(notas)/sizeof(notas[0]);
    int* notasUsadas = (int*)malloc(numNotas * sizeof(int));

    if(notasUsadas==NULL){
        printf("Erro ao alocar memória! \n");
        exit(1);
    }

    for (int i = 0; i < numNotas; i++) {
        notasUsadas[i] = 0;
    }


    for(int i = numNotas - 1; i >= 0; i--){
        if (quantia >= notas[i]) {
            notasUsadas[i] = quantia / notas[i];
            quantia = quantia % notas[i];
        }
    }
    return notasUsadas;
}