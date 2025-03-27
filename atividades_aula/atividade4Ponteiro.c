#include <stdio.h>

void copyArray(int vet1[], int vet2[], int tam);

void copyArray(int vet1[], int vet2[], int tam){
    for(int i = 0; i<tam; i++){
        *vet2 = *vet1;
        vet2++;
        vet1++;
    }
}

int main(){
    int vet1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vet2[10];
    inverteVetor(vet1, vet2, 10);
    for (int i = 0; i < 10; i++)
        printf("%d ", vet2[i]);
    printf("\n");
    return 0;
}