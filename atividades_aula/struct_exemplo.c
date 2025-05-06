#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

typedef struct
{
    float p1;
    float p2;
    float trab;
    int faltas;
} Aluno;

typedef struct{
    int y;
    int x;
} Pontos;

typedef struct
{
    float numerador;
    float denominador;
} Fracao;

float calcula(Fracao frac);
// const faz com que a memória
// apontada não possa ser alterada
float calcula2(const Fracao *frac);

int random(int max, int min);
void randomSeeds(Pontos vet[], int tam);
float distancia(Pontos *pontA, Pontos *pontB);

int main()
{
    /*
    Aluno aluno1, aluno2;

    aluno1.p1 = 10;
    aluno1.p2 = 7.5;
    aluno1.trab = 8;
    aluno1.faltas = 4;

    aluno2.p1 = 6.5;
    aluno2.p2 = 4.8;
    aluno2.trab = 7.5;
    aluno2.faltas = 0;

    Fracao f1;
    Fracao f2 = {5, 3};
    f1.numerador = 2;
    f1.denominador = 3;
    printf("Valor (calcula) : %f\n", calcula(f1));
    printf("Valor (calcula2): %f\n", calcula2(&f1));
    */

    Pontos vetor[200];
    int tam = 200;

    randomSeeds(vetor, tam);

    for(int i = 0; i < tam; i++){
        float menorDist = INFINITY;
        int indiceMaisProximo = -1;

        for(int j = 0; j<tam; j++){
            if(i!=j){
                float d = distancia(&vetor[i], &vetor[j]);
                if(d<menorDist){
                    menorDist = d;
                    indiceMaisProximo = j;
                }
            }
        }

        printf("Ponto A: (%d, %d)  ->  Ponto mais proximo: (%d, %d)\n",
               vetor[i].x, vetor[i].y,
               vetor[indiceMaisProximo].x, vetor[indiceMaisProximo].y);
    }

    return 0;
    
}

float calcula(Fracao frac)
{
    return frac.numerador / frac.denominador;
}

float calcula2(const Fracao *frac)
{
    //frac->numerador = 0;
    // return (*frac).numerador / (*frac).denominador;
    return frac->numerador / frac->denominador;
}

float distancia(Pontos *pontA, Pontos *pontB){
    float dist = sqrt(pow((pontA->x - pontB->x),2) + pow((pontA->y - pontB->y), 2));
    return dist;
}

void randomSeeds(Pontos vet[], int tam){
    srand(time(NULL));

    for(int i = 0; i<tam; i++){
        vet[i].x = random(100, -100);
        vet[i].y = random(100, -100);
    }
}

int random(int max, int min){
    return rand() % (max - min + 1) + min;
}