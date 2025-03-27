#include <stdio.h>

void ordenaValor(int v[], int tam);
void printArray(int v[], int tam);

void printArray(int v[], int tam){
    for(int i = 0; i<tam; i++){
        printf("[%d]",*v);
        v++;
    }
}

void ordenaValor(int v[], int tam){
    for(int i = 0; i<tam; i++){
        int *ptr = v;
        int *ptr2 = ptr + 1;

        for(int j = 0; j<tam-i-1; j++, ptr++, ptr2++){
            if(*ptr>*ptr2){
                int temp = *ptr;
                *ptr = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}

int main(){

    int v[] = {5,4,2,8,1,6,3,7,9,0};
    int tam = 10;

    printArray(v, tam);

    ordenaValor(v, tam);

    printf("\n");
    printArray(v, tam);
    printf("\n");


    return 0;
}