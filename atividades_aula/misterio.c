#include <stdio.h>

void func1(){
    int vet[] = {4, 9, 12};
    int i, *ptr;
    ptr = vet;
    for (i = 0; i < 3; i++)
        printf("%d ", *ptr++);
}

void func2(){
    int vet[] = {4, 9, 12};
    int i, *ptr;
    ptr = vet;
    for (i = 0; i < 3; i++){
        printf("%d ", (*ptr)++);
        // O erro aqui são os parênteses: ele INCREMENTA
        // O CONTEÚDO APONTADO, e não o ponteiro
    }
}

int main(){
    func1();
    // func2();
    printf("\n");
}