#include <stdio.h>
int main()
{
    // Erro de precisão causado pelo incremento
    // contínuo do contador
    float meters = 0;
    int iterations = 10000000;
    for (int i = 0; i < iterations; i++)
    {
        meters += 0.01;
    }
    printf("Esperado: %f km\n", 0.01 * iterations / 1000);
    printf("Obtido  : %f km \n", meters / 1000);
}