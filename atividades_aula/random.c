#include <stdio.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));
    printf('RAND_MAX: %d\n', RAND_MAX);
    printf('%d\n', rand()%100);
    printf('%d\n', rand()%100);
    printf('%d\n', rand()%100);

    return 0;
}