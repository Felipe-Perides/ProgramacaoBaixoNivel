#include <stdio.h>
#include "bibFunc.h"

int main(){
    int v;
    printf("Digite um valor: ");
    scanf("%d", &v);
    printf("Fatorial: %.2f\n", fatorial(v));
    printf("Somatorio: %.2f\n", somatorio(v));
}