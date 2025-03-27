#include <stdio.h>

void inverteVetor(int v[], int tam);

int main(){
    int vet1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    inverteVetor(vet1, 10);
    for (int i = 0; i < 10; i++)
        printf("%d ", vet1[i]);
    printf("\n");
    return 0;
}

void inverteVetor(int v[], int tam){
    int *v2 = v + tam - 1;
    while (v < v2){
        int temp = *v;
        *v = *v2;
        *v2 = temp;
        v++;
        v2--;
    }

    /*
    int j = tam - pos - 1;
    for (int pos = 0; pos < tam / 2; pos++, j--){
        int temp = v[pos];
        v[pos] = v[j];
        v[j] = temp;
    }
    */
}