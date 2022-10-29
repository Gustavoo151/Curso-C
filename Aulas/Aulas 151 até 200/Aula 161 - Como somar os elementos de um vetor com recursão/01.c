#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
        Aula 161: Faça uma função recursiva para calcular a soma de todos os valores de um vetor de inteiros.
*/

void imprimi(int vet[], int tamvet){
    for (int i = 0; i < tamvet; i++)    
        printf("%d ", vet[i]);
    printf("\n");
}

int somaVet(int vet[], int tamvet){
    if (tamvet == 0)  // Caso base
        return 0;
    else
        return vet[tamvet -1] + somaVet(vet, tamvet - 1);
}

int main(){

    srand(time(NULL));

    int tamVet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamVet);

    int vet[tamVet];

    for (int i = 0; i < tamVet; i++)    
        vet[i] = rand() % 10;

    imprimi(vet, tamVet);

    printf("A soma do vetor de %d colunas é : %d\n", tamVet, somaVet(vet, tamVet));

    return 0;
}