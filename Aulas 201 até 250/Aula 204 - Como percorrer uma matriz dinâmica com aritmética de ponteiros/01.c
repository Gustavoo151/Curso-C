#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
        Aula 204: É possível percorrer uma matriz dinâmica sem colchetes?
    vetor de vetores -> int* -> 10 27 32
                        int* -> 11 75 49
                        int* -> 43 82 10
                        int* -> 12 47 62
*/

int main(){

    int **mat;  // Usando ** para detarminar que essa variável e um ponteiro de ponteiro

    mat = malloc(10 * sizeof(int*));  // Alocando na memória 6 espacos de ponteiros do tipo int

    for(int i = 0; i < 10; i++)
        *(mat + i) = malloc(10 * sizeof(int));  // Alocando 6 espaço para para cada linha da matriz, usando aritmetica de ponteiros

    srand(time(NULL));  // Criando semente para gerar numeros pseúdos aleatórios

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
           *(*(mat + i) + j) = rand() % 100;  // Pegando o endereço de memória usando aritmetica de ponteiros
    }
    
    for(int i = 0; i < 10; i++){  // Printando a matriz 6x6
        for(int j = 0; j < 10; j++)
            printf("%2d ", *(*(mat + i) + j));  // O primeiro colchetes da acesso ao ponteiro da linha, o segundo colchetes de acesso ao valores das coluna
        printf("\n");
    }
    return 0;
}