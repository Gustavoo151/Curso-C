#include <stdio.h>
#include <stdlib.h>

//  Aula 185: De quanta memória um ponteiro preceisa ?

int main(){

    int *p;
    char *p2;
    float *p3;

    // Um endereço de memória sempre terá o mesmo tamanho não inportar se é int, char, float e etc.
    printf("Tamanho de um inteiro: %d\n", sizeof(int));
    printf("Tamanho de um ponteiro int: %d\n", sizeof(p));
    printf("Tamanho de um ponteiro char: %d\n", sizeof(p2));
    printf("Tamanho de um ponteiro float: %d\n", sizeof(p3));


    return 0;
}