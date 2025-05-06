#include <stdio.h>
#include <string.h>

char* minha_strstr(char* string, char* subString);
char* minha_strstrIndex(char* string, char* subString);
char* minha_strstrCorrecao(char* string, char* subString);

char* minha_strstrCorrecao(char* string, char* subString){
    int tam = strlen(string);
    int tamSub = strlen(subString);
    int i;
    for(i = 0; i<tam-tamSub; i++){
        int j;
        for(j = 0; j<tamSub; j++){
            if(string[i+j]!=subString[j]){
                break;
            }
            if(j==tamSub){
                return string+i;
            }
        }
    }
    return NULL;
}

char* minha_strstrIndex(char* string, char* subString){
    if(!*subString) return string;

    for(int i = 0; string[i] != '\0'; i++){
        int j;
        for(j = 0; subString[j] != '\0'; j++){
            if(string[i+j] != subString[j]){
                break;
            }
        }
        if(subString[j] == '\0'){
            return &string[i];
        }
    }

    return NULL;
}

char* minha_strstr(char* string, char* subString){
    if(!*subString) return string;

    for(char* s = string; *s != '\0'; s++){
        char* s1 = s;
        char* s2 = subString;

        while (*s1 && *s2 && (*s1 == *s2)){
            s1++;
            s2++;
        }
        
        if(!*s2){
            return s;
        }
    }
    return NULL;
}


int main(){
    char *str = "Hello, world!";
    char *substr = "world";

    

    char* resultado = minha_strstr(str, substr);
    if (resultado) {
        printf("Substring encontrada: %s\n", resultado);
    } else {
        printf("Substring nao encontrada.\n");
    }

    char* resultadoIndex = minha_strstrIndex(str, substr);
    if(resultadoIndex){
        printf("Substring encontrada: %s\n", resultadoIndex);
    }else{
        printf("Substring nao encontrada.\n");
    }

    char* resultadoCorrecao = minha_strstrCorrecao(str, substr);
    if(resultadoCorrecao){
        printf("Substring encontrada: %s\n", resultadoCorrecao);
    }else{
        printf("Substring nao encontrada.\n");
    }

    return 0;
}