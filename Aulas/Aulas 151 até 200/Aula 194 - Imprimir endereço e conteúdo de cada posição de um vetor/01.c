/*
3) Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o
endereço de cada posição do array.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; i++)
        printf("Endereço: %p\tConteúdo: %d\n", vet + i, *(vet + i));

    return 0;
}