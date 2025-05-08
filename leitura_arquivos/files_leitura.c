#include <stdio.h>
#include <stdlib.h>

// Opening a file => FILE* fopen(char* filename, char* mode);
// mode strings:
// "r" => Open a file for reading. The file must exist.
// "w" => Create an empty file for writing.If a file with the same name already exists its content is erased and the file is treated as a new empty file.
// "a" => Append to a file.Writing operations append data at the end of the file. The file is created if it does not exist

int main(){

    //printf("Exemplo de escrita\n");
    //fprintf(stderr, "Exemplo de erro!\n");
    //FILE* arq = fopen("/teste.txt", "w");

    FILE* fp = fopen("myText.txt", "r");

    if(fp == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    char c;
    while((c = fgetc(fp)) != EOF){
        printf("Caractere: %c (%d)\n", c, c);
    }

    // Reposiciona o ponteiro para o início do arquivo
    rewind(fp);

    char str[80];
    while(fgets(str, 80, fp) != NULL){
        printf("Linha: %s", str);
    }

    rewind(fp);

    /*
    while(!feof(fp)){
        // Quando falha, não altera str!
        fgets(str, 80, fp);
        // Vai repetir 2X a última linha!
        printf("Linha: %s", str);
    }

    rewind(fp);
    */

    // Leitura de CAMPOS (int, por ex)
    // Cuidado ao usar fscanf com STRING!
    // (Tenha certeza que a string tem tamanho suficiente!)
    int v1, v2;
    char linha[100];

    while (fgets(linha, sizeof(linha), fp) != NULL) {
        if (sscanf(linha, "%d %d", &v1, &v2) == 2) {
            printf("Valores lidos: %d e %d\n", v1, v2);
        } else {
            printf("\nErro de leitura ou linha mal formatada: %s", linha);
        }
    }

    fclose(fp);

    return 0;
}