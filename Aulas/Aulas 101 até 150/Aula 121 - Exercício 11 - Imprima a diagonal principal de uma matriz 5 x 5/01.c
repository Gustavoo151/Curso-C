/*
11) Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.
*/

#include <stdio.h>
#include <time.h>

int main(){

    int vet[5][5];

    srand(time(NULL));

    for (int i = 0; i < 5; i ++){
        for (int j = 0; j < 5; j ++){
            vet[i][j] = rand() % 10;
            printf("%d ", vet[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < i; j++)
            printf("  ");
        printf("%d \n", vet[i][i]);
    }
    return 0;
}