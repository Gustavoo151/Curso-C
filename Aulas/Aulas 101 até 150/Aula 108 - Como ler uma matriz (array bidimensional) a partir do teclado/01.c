#include <stdio.h>

int main(){

    int mat1[3][3];

    char mat2[3][4]  = {'a','b','c','d','e','f','g','h','i','j','k','l'};


    for (int i =0; i < 3; i++){  // Preechendo uma matriz 3x3 a partir do teclado+
        for (int j = 0; j < 3; j++){
            printf("Digite o valore para Coluna %d X linha %d: ", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }
    }


    for (int i = 0; i < 3; i++){   // Printando a matriz de int 3x3
        for(int j = 0; j < 3; j++)
            printf("%2d ", mat1[i][j]);
        printf("\n");
    }

    printf("-----------\n");

    for(int i = 0; i < 3; i++){   // Printando a matriz de char 3x4
        for(int j = 0; j < 4; j++)
            printf("%c ", mat2[i][j]);
        printf("\n");
    }

    return 0;
}