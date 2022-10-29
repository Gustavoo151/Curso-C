#include <stdio.h>
#include <stdlib.h>

 //  Aula 69 - Diferença entre as estruturas de repetição for, while e do while

int main() {
    int i = 0;

    printf("\nGerado com for:\n");
    for (i = 0; i <= 10; i++)  // For é usado quando sabemos o começo é o fim do teste 
        printf("%d ", i);

    printf("\n\nGerando com while:\n");
    i = 0;

    while (i <= 10)  // É mais usado para quando não sabemos o fim do teste (ele testa antes de rodar)
    {
        printf("%d ", i++);
    }

    printf("\n\nGerando com DO WHILE:\n");
    i = 0;

    do{ printf("%d ", i++);  // O DO WHILE é usado para quando não queremos passar um valor antes do teste (ele teste depois de rodar)
    } while (i <= 10);

    return 0;
}