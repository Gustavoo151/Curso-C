/*
1) Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas
variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.
*/

#include <stdio.h>
#include <stdlib.h>

void maiorMenor(int *vet[], int tam, int *maior, int *menor){
    *menor = *vet;
    *maior = *vet;  // Sempre será retornado o primeiro valor do vetor

    for (int i = 0; i < tam; i++){
        if (*menor > *(vet + i))
            *menor = *(vet + i);
        else if(*maior < *(vet + i))
            *maior = *(vet + i); 
        }
}

int main(){

    int *vet[7] = {2, 4, 40, 33, 12, 1, 10};
    int *maior, *menor;

    maiorMenor(vet, 7, &maior, &menor);

    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);

    return 0;
}