#include <stdio.h>

int quantNumRep(int vetor[], int n);

int quantNumRep(int vetor[], int n){
    int repetidos = 0;

    for(int i = 0; i<n; i++){
        int repeticoes = 0;
        for(int j = i+1; j<n; j++){
            if(vetor[i] == vetor[j]){
                repeticoes++;
            }
        }
        if(repeticoes == 1){
            repetidos++;
        }
    }

    return repetidos;
}

int main(){
    int tam = 10;
    int array[] = {0,1,2,3,4,5,3,6,7,2};
    int tam1 = 15;
    int array1[] = {0,1,1,2,3,3,3,4,5,5,6,6,6,6,7};

    int result1 = quantNumRep(array, tam);
    int result2 = quantNumRep(array1, tam1);
    printf("\n%d\n",result1);
    printf("\n%d\n", result2);

    return 0;
}