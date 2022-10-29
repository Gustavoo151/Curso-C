/*
13) Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na
tela.
*/

#include <stdio.h>
#include <time.h>

int main(){

    int vet[5][4], vetTrans[4][5];

    srand(time(NULL));

    printf("\nMatriz[5][4]: \n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j ++){
            vet[i][j] = rand() % 10;
            printf("%d ", vet[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz[5][4] transposta: \n");
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            vetTrans[i][j] = vet[j][i];
            printf("%d ", vetTrans[i][j]);
        }
        printf("\n");
    }
    return 0;
}