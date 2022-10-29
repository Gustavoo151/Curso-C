/*
12) Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.
*/

#include <stdio.h>
#include <time.h>

int main(){

    int vet[7][7], cont = 6;

    srand(time(NULL));

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            vet[i][j] = rand() % 10;
            printf("%d ",vet[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 7; i++){
        printf("%d \n", vet[i][cont]);
        cont--;
    }

    return 0;
}