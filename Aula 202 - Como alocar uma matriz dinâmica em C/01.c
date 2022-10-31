#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
        Aula 202: Como alocar uma matriz dinâmica ?
    vetor de vetores -> int* -> 10 27 32
                        int* -> 11 75 49
                        int* -> 43 82 10
                        int* -> 12 47 62
*/

int main(){

    int **mat;  // Usando ** para detarminar que essa variável e um ponteiro de ponteiro

    mat = malloc(6 * sizeof(int*));  // Alocando na memória 6 espacos de ponteiros do tipo int

    for(int i = 0; i < 6; i++)
        mat[i] = malloc(6 * sizeof(int));  // Alocando 6 espaço para para cada linha da matriz

    srand(time(NULL));  // Criando semente para gerar numeros pseúdos aleatórios

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            mat[i][j] = rand() % 100; // Preechendo uma matriz 6x6 com numeros pseudos aleatórios de 1 até 100
    }
    
    for(int i = 0; i < 6; i++){  // Printando a matriz 6x6
        for(int j = 0; j < 6; j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
    return 0;
}