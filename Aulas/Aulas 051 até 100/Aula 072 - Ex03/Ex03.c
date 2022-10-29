/*
3) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
*/

#include <stdio.h>

int main(){

    int soma = 0;

    for (int i = 1; i <= 1000; i += 2)
        soma += i;

    printf("A soma de todos os números ímpares de 1 a 1000 é %d\n", soma);
    

    return 0;
}