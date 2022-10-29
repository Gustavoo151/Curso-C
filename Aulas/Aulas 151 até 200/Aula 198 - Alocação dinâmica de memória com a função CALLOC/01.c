#include <stdio.h>
#include <stdlib.h>
/*
    Aula 198: Alocação dinâmica de memória com a função calloc.
*/

int main(){
    char *x;

    x = calloc(1, sizeof(char)); // calloc precisa de pois parâmetros 1º- A quantidade de elemetos para o qual eu vou querer alocar memória. 2º e o tipo

    if (x){  // Colocar x eo mesmo que colocar (x != NULL)
        printf("Memória alocada com sucesso!\n");
        printf("X: %c\n", *x);
        *x = 'H';
        printf("X: %c\n", *x);
    }
    else
        printf("Erro ao alocar memória!\n");

    return 0;
}