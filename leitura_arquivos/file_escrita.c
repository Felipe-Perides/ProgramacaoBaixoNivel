#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* arq = fopen("myText2.txt","w");

    if(arq == NULL){
        printf("Erro ao abrir o arquivo!\n");
        perror("Erro: ");
        exit(1);
    }

    // Escrevendo caracteres
    
    for(int i=1; i<10; i++)
        fputc('A', arq);
    

    // Escrevendo strings com fputs
    for(int i=0; i<10; i++)
        fputs("\nPor favor, pare de chover!", arq);
    

    // Escrevendo campos com fprintf
    for(int i=1; i<= 10; i++)
        fprintf(arq, "\nSeria ótimo se parasse de chover #%d", i);
    fclose(arq);

    return 0;
}