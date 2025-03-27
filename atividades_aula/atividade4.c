#include <stdio.h>

void multMatriz(int a[5][3], int b[3][4], int c [5][4]);

void multMatriz(int a[5][3], int b[3][4], int c [5][4]){
    for(int i = 0; i<5; i++){
        for(int j = 0; j<4; j++){
            c[i][j] = 0;
            for(int k = 0; k<3; k++){
                c[i][j] += a[i][k]*b[k][j]; 
            }
        }
    }
}

int main(){
    int matrizA[5][3] = {{0,1,2},{3,4,5},{6,7,8},{9,10,11},{12,13,14}};
    int matrizB[3][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11}};
    int matrizC[5][4];

    multMatriz(matrizA,matrizB,matrizC);

    for(int i = 0; i<5; i++){
        for(int j = 0; j<4; j++){
            printf(" [%d] ",matrizC[i][j]);
        }
        printf("\n");
    }
    return 0;
}