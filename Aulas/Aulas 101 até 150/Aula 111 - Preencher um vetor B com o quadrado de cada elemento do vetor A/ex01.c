/*
1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.
*/

#include <stdio.h>

int main(){

    int vet1[10], vet2[10];

    for (int i = 0; i < 10; i++){  // Recebendo 10 valores do teclado
        printf("Digite um valor para posição %d: ", i);
        scanf("%d", &vet1[i]);
    }

    for (int i = 0; i < 10; i++) // Adicionando no vet2 todos os valores do vet1 ao quadrado
        vet2[i] = vet1[i] * vet1[i];

    printf("\n");

    for (int i = 0; i < 10; i++)  // printando o vet1
        printf("%3d ", vet1[i]);

    printf("\n");

    for (int i = 0; i < 10; i++)  // printando o vet2
        printf("%3d ", vet2[i]);

    printf("\n");

    return 0;
}