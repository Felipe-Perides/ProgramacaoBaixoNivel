#include <stdio.h>

int main()
{
    int valor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);
    // printf("Comecei!\n");
    // for (valor = 1; valor < 2000000; valor++)
    // {
    int notas100 = valor / 100;
    int notas50 = valor % 100 / 50;
    int notas10 = valor % 50 / 10;
    int notas5 = valor % 10 / 5;
    int notas1 = valor % 5;
    // Menos eficiente (mas na prática não muda muita coisa...)
    // int notas10 = valor % 100 % 50 / 10;
    // int notas5 = valor % 100 % 50 % 10 / 5;
    // int notas1 = valor % 100 % 50 % 10 % 5;
    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50:  %d\n", notas50);
    printf("Notas de 10:  %d\n", notas10);
    printf("Notas de 5:   %d\n", notas5);
    printf("Notas de 1:   %d\n", notas1);
    // }
    // printf("Terminei!\n");
    return 0;
}
