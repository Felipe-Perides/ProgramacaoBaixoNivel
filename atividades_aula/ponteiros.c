#include <stdio.h>

void incArray(int v[], int tam);
void printArray(int v[], int tam);

void printArray(int v[], int tam){
    int c;
    for(c=0; c<tam; c++){
        printf(" [%d] ", v[c]);
    }
}

void incArray(int v[], int tam){
    int c;
    for(c=0; c<tam; c++){
        v[c]++;
    }
}

int main(){

    int b = 200;
    int* a = &b; // a armazena o ENDEREÇO de b
    printf("Endereco de b: %p\n", &b);
    printf("Valor de b: %d\n", b);
    printf("Conteudo apontado por a: %d\n", *a);
    printf("Valor de a: %p\n", a);


    int c = 200;
    int* d;
    printf("Conteudo apontado por d: %d\n", *d);  // oops!


    int e = 200;
    int* f = NULL;
    if(f != NULL){
        printf("Conteudo apontado por b: %d\n", *f); // f é válido
    }else{
        printf("Ponteiro invalido!\n");
    }

    printf("\n");
    int data[] = {1,2,3,4,5,6,7,8,9,10};
    printArray(data, 10); //Array normal
    incArray(data,10);
    printf("\n");
    printArray(data, 10); //todos os elementos +1
    printf("\n");


    //Aritmética de ponteiros
    char g[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char* p = g; //não precisa &, g já é um ponteiro

    printf("\nPrimeiro Elemento de g(usando *p): %c\n", *p);                // exibe o primeiro elemento do array
    printf("Primeiro Elemento de g(usando p[0]): %c\n", p[0]);              // idem
    
    printf("Endereco do Primeiro Elemento de g(usando p): %p\n", p);        // exibe o endereço do primeiro elemento
    printf("Endereco do Primeiro Elemento de g(usando g): %p\n", g);        // idem
    printf("Endereco do Primeiro Elemento de g(usando g[0]): %p\n", &g[0]); // idem 

    printf("Primeiro elemento de g: %c\n", *p);     // exibe 'a'
    printf("Segundo elemento de g: %c\n", *(p+1)); // exibe 'b'
    printf("Terceiro elemento de g: %c\n", *(p+2)); // exibe 'c'
    printf("Quarto elemento de g: %c\n", *(p+3)); // exibe 'd'
        

    return 0;
}