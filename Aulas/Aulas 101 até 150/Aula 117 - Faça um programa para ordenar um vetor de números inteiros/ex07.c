/*
7) Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e
após a ordenação.
*/
#include <stdio.h>
#include <time.h>

int main(){

    int vetor[100], valorAuxi, troca;
    srand(time(NULL));

    for(int i = 0; i < 100; i++){
        vetor[i] = rand() % 1000;
    }

    printf("Antes da ordenação");
    for (int i = 0; i < 100; i ++)
    printf("%d ", vetor[i]);

    do{
        troca = 0;  // troca sempre inicia com 0 para verificar se entrou no if
        for (int i = 0; i < 100; i ++){
            if (vetor[i] > vetor[i+1]){
                valorAuxi = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = valorAuxi;
                troca = 1;
            }
        }
    }while(troca);  // Troca serve para verificar se o programa fez alguma troca e se ele fizer troca recebe 0 (False) e o programa finaliza

    printf("Após a orenação");
    for (int i = 0; i < 100; i ++)
        printf("%d ", vetor[i]);

    return 0;
}