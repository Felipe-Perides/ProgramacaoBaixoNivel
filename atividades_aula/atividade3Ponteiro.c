#include <stdio.h>

int searchIndex(int vetor[], int tam, int target);

int searchIndex(int vetor[], int tam, int target){
    for(int pos = 0; pos<tam; pos++){
        if(*vetor == target){
            return pos;
            vetor++;
        }
    }
    return -1;
}

int main(){
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int pos = copiaVetor(vet, 11, 10);
    if (pos == -1)
        printf("Valor não encontrado!\n");
    else
        printf("Valor encontrado na posição %d\n", pos);
    return 0;
}