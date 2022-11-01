#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Aula 206: Como libear a memória de uma matriz dinâmica?
*/

int main(){

    int **mat;  // Usando ** para detarminar que essa variável e um ponteiro de ponteiro

    mat = malloc(5 * sizeof(int*));  // Alocando na memória 6 espacos de ponteiros do tipo int

    for(int i = 0; i < 5; i++)
        *(mat + i) = malloc(5 * sizeof(int));  // Alocando 6 espaço para para cada linha da matriz, usando aritmetica de ponteiros

    srand(time(NULL));  // Criando semente para gerar numeros pseúdos aleatórios

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++)
           *(*(mat + i) + j) = rand() % 100;  // Pegando o endereço de memória usando aritmetica de ponteiros
    }
    
    for(int i = 0; i < 5; i++){  // Printando a matriz 6x6
        for(int j = 0; j < 5; j++)
            printf("%2d ", *(*(mat + i) + j));  // O primeiro colchetes da acesso ao ponteiro da linha, o segundo colchetes de acesso ao valores das coluna
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
        free(mat[i]); // Liberando espaço alocado dos vetores de inteiros

    free(mat); // Liberando espaço alocado da matriz de vetores

    return 0;
}