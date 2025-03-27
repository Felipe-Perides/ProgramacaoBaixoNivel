#include <stdio.h>

int conversorH(int seg);
int conversorM(int seg);
int conversorS(int seg);

int conversorS(int seg){
    int segundos;
    segundos = (seg%3600)%60;
    return segundos;
}

int conversorM(int seg){
    int minutos;
    minutos = (seg%3600)/60;
    return minutos;
}

int conversorH(int seg){
    int horas;
    horas = seg/3600;
    return horas;
}

int main(){
    int seg = 44228;

    printf("%d segundos eh igual a: \n", seg);
    printf("Segundos: %d\n",conversorS(seg));
    printf("Minutos: %d\n",conversorM(seg));
    printf("Horas: %d\n",conversorH(seg));

    return 0;
}