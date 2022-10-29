/*
8) Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.
*/

#include <stdio.h>
#include <time.h>

int main(){

    int vetor[5][7], somaVetor;

    srand(time(NULL));

    for (int i = 0; i < 5; i ++){
        for (int j = 0; j < 7; j++)
            vetor[i][j] = rand() % 100;
    }
    
    for (int i = 0; i < 5; i ++){
        for (int j = 0; j < 7; j++)
            somaVetor += vetor[i][j];
    }

    printf("A soma de todos o valores do vetor 5x7 é: %d \n", somaVetor);

    return 0;
}