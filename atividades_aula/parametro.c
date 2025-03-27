#include <stdio.h>

void quadrado(); //protótipo
int multiplica(int x);

int multiplica(int x){
    x = x*x;
    return x;
}

void quadrado(){ //Sem valor de retorno/parametro de entrada
    int k;
    for(k=1; k<=10; k++){
        printf("%d\n",k*k);
    }
}

int main(){
    int k = 4;
    k = multiplica(k);
    printf("%d\n", k);
    quadrado();
}