#include <stdio.h>
#include <stdlib.h>

// Aula 191: O que é ponteiro para ponteiro

int main(){

    int A = 100, *B, **C;  // Usando ** Temos um ponteiro para ponteiro

    B = & A;

    C = &B;

    printf("Endereço de A: %p\tConteúdo de A: %d\n", &A, A);
    printf("Endereço de B: %p\tConteúdo de B: %p\n", &B, B);
    printf("Conteúdo apontado por B: %d\n", *B);
    printf("Endereço de C: %p\tConteúdo de C: %p\n", &B, B);
    printf("Conteúdo apontado por B: %d\n", **C); // Tem que ter dois asteriscos **


    return 0;
}