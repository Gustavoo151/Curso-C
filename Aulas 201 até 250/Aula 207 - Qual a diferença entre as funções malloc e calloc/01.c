#include <stdio.h>
#include <stdlib.h>

// Aula 207: Curiosidade entre as funções malloc e calloc

int main(){

    int *vet1, *vet2;

    vet1 = malloc(10 * sizeof(int)); // A função malloc não tira o lixo de memória
    vet2 = calloc(10, sizeof(int));  // A função calloc já tira o lixo de memória

    printf("\nCom malloc: ");
    for(int i = 0; i < 10; i++)
        printf("%d ", vet1[i]);
        
    printf("\nCom calloc: ");
    for(int i = 0; i < 10; i++)  
        printf("%d ", vet2[i]);

    return 0; 
}