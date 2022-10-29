/*
    1) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/

#include <stdio.h>

int main(){

    int valor_1, valor_2, valor_3, maior_valor;

    printf("\nDigite os Três valores: ");
    scanf("%d%d%d", &valor_1, &valor_2, &valor_3);

    maior_valor = valor_1;

    if (maior_valor < valor_2)
        maior_valor = valor_2;

    if (maior_valor < valor_3)
        maior_valor = valor_3;

    printf("\nO maior valor é %d\n", maior_valor);

    return 0;
}