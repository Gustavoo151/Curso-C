#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
        Aula 104 - Como gerir números aleatórios dentro de um intervalo?
*/
int main() {

    int i;
    int vetor[10];

    srand(time(NULL));

    for(int i = 0; i < 10; i++)
        vetor[i] = rand() % 100;  // Para gerar um número em um intervalo basta fazer o resto da divisão

    printf("\n");
    for (int i = 0; i < 10; i++)
        printf("%d\n", vetor[i]);  

    return 0;
}