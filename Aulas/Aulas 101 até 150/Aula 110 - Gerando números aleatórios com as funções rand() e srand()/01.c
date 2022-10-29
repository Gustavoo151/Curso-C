#include <stdio.h>
#include <time.h>

int main(){

    int mat1[3][3];

    srand(time(NULL));

    for (int i =0; i < 3; i++){  // Preechendo uma matriz 3x3  com valores pseudos aleatórios
        for (int j = 0; j < 3; j++){
            mat1[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < 3; i++){   // Printando a matriz de int 3x3
        for(int j = 0; j < 3; j++)
            printf("%2d ", mat1[i][j]);
        printf("\n");
    }

    return 0;
}