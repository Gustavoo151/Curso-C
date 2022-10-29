/*
14) Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma
matriz 4 x 4.
*/

#include <stdio.h>
#include <time.h>

int main(){

    int vet[8][8];

    srand(time(NULL));

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            vet[i][j] = rand() % 10;
            printf("%d ", vet[i][j]); 
        }
        printf("\n");
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j <= (i -1); j++)
            printf("%d ", vet[i][j]);
       printf("\n");
    }
    return 0;
}