#include <stdio.h>

// Declaração da função isEven antes do main
int isEven(int a);

int main() {
    char nome[50];
    int num;

    // Solicita o nome do usuário
    printf("Digite o seu nome: ");
    scanf("%s", nome);  // Correção: não use & para strings

    // Sauda o usuário
    printf("Hello %s\n", nome);

    // Solicita um número ao usuário
    printf("\nDigite um numero qualquer: ");
    scanf("%d", &num);

    // Verifica se o número é par ou ímpar
    if (isEven(num)) {
        printf("O numero %d eh par!\n", num);  // Correção: use uma única string de formato
    } else {
        printf("O numero %d eh impar!\n", num);  // Correção: use uma única string de formato
    }

    return 0;
}

// Definição da função isEven
int isEven(int a) {
    if (a % 2 == 0) {
        return 1;  // Retorna 1 se o número for par
    }
    return 0;  // Retorna 0 se o número for ímpar
}