#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Aula 145: O que são funções e procedimento?
        Um procedimento não retorna nada

*/
int main(){

    int tam;

    tam = printf("Hello");  //O printf retorna a quantidade de elementos lidos

    tam = strlen("Oi!"); // Funçõa para saber o tamanho da string


    printf("\nTamanho: %d\n", tam);

    return 0;
}