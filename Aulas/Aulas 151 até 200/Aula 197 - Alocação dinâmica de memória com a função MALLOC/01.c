#include <stdio.h>
#include <stdlib.h>
/*
        Aula 197: Alocação dinâmica de memória com a função malloc.
    retorna um ponteiro para a região de alocada ou NULL.

    Ela retorna um ponteiro com a regiaõ alocada ou NULL se não tive espaço na menória para alocar
*/

int main(){

    int *x;

    x = malloc(sizeof(int));  // Alocando na memória um int

    if (x){  // Colocar x eo mesmo que colocar (x != NULL)
        printf("Memória alocada com sucesso!\n");
        printf("X: %d\n", *x);
        *x = 10;
        printf("X: %d\n", *x);
    }
    else
        printf("Erro ao alocar memória!\n");
    return 0;
}