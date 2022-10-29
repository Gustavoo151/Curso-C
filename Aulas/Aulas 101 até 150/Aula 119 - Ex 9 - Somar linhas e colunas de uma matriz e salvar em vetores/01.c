/*
9) Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.
*/
#include <stdio.h>
#include <time.h>

int main(){

    int vetor[5][10], VetSomaLinha[5],vetSomaColuna[10], somaLinha = 0, somaColuna = 0;

    srand(time(NULL));

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 10; j++){
            vetor[i][j] = rand() % 10;
            somaLinha += vetor[i][j];
        }
        VetSomaLinha[i] = somaLinha;
        somaLinha = 0;
    }

    for (int i =0; i < 10; i++){
        for(int j = 0; j < 5; j++)
            somaColuna += vetor[j][i];
        vetSomaColuna[i] = somaColuna;
        somaColuna = 0;
    }

    printf("Soma das linnhas: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", VetSomaLinha[i]);
    }
    printf("\n");

    printf("Soma das colunas: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", vetSomaColuna[i]);
    }
    printf("\n");

    return 0;
}