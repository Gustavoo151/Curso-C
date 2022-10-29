/*
10) Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar
em uma matriz C. Imprima as três matrizes.
*/

#include <stdio.h>
#include <time.h>

int main(){

    int vetA[3][3], vetB[3][3], vetC[3][3];

    srand(time(NULL));

    printf("\nVetor A:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            vetA[i][j] = rand() % 10;
            printf("%2d ", vetA[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor B:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            vetB[i][j] = rand() % 10;
            printf("%2d ", vetB[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos vetores A e B:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            vetC[i][j] = vetA[i][j] + vetB[i][j];
            printf("%2d ", vetC[i][j]);
        }
        printf("\n");
    }

    return 0;
}